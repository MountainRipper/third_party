#include <cstdint>
#include <string>
#include <cxxopts.hpp>
#define SPDLOG_COMPILED_LIB
#define MR_GL_CHECK(level, format, ...) \
{\
        GLenum gl_error = GL_NO_ERROR;\
        while(GLenum err = glGetError()){\
            MR_LOG(level,"OpenGL Call Failed:{} {}",err,mr::fmt_format(format,##__VA_ARGS__));\
            gl_error = err;\
    }\
}

void logEglError(const char *name);
uint32_t create_texture(int width,int height,uint8_t value);
uint32_t create_program(const char* vss, const char* fss);
uint32_t print_shader_compile_info(uint32_t shader);

#ifndef SDLSHOWCASEBASE_H_DEF_
#define SDLSHOWCASEBASE_H_DEF_
class SDLShowcaseBase{
public:
    virtual ~SDLShowcaseBase(){}
    virtual int32_t on_set_params(cxxopts::Options& options) = 0;
    virtual int32_t on_pre_init(cxxopts::ParseResult& options_result,uint32_t& window_flags) = 0;
    virtual int32_t on_init(void *window,int width, int height) = 0;
    virtual int32_t on_deinit() = 0;
    virtual int32_t on_frame() = 0;


    virtual void button_callback( int bt/*SDL_BUTTON_LEFT,SDL_BUTTON_MIDDLE,SDL_BUTTON_RIGHT,SDL_BUTTON_X1,SDL_BUTTON_X2*/,
                                  int type/*SDL_MOUSEBUTTONDOWN,SDL_MOUSEBUTTONUP*/,
                                  int clicks,/*1 for single-click, 2 for double-click*/
                                  double x,
                                  double y) = 0;

    virtual void cursor_callback( double x, double y) = 0;

    virtual void key_callback( int key, /*SDLK_xxx*/
                               int type,/*SDL_KEYDOWN,SDL_KEYUP*/
                               int scancode,/*enum SDL_Scancode*/
                               int mods/*current key modifiers*/) = 0;
    virtual void char_callback(const char* key, /*char text[SDL_TEXTINPUTEVENT_TEXT_SIZE=32];*/
                              int type/*SDL_TEXTINPUT*/) = 0;
    virtual void error_callback(int err, const char* desc) = 0;
    virtual void resize_callback( int width, int height) = 0;

    virtual void command(std::string command) = 0;
public:
    std::string name_;
    std::string describe_;
};
#endif




extern SDLShowcaseBase* sdl_runner_create_showcase();

#define MR_MR_SDL_RUNNER_SHOWCASE(CLASS) \
SDLShowcaseBase* sdl_runner_create_showcase(){\
    return static_cast<SDLShowcaseBase*>(new CLASS());\
}
