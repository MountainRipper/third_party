#ifndef SDL3_RUNNER_H
#define SDL3_RUNNER_H

#include <cstdint>
#include <iostream>
#include <string>
#include <cxxopts.hpp>
#include <chrono>

void logEglError(const char *name);
uint32_t create_texture(int width,int height,uint8_t value);
uint32_t create_program(const char* vss, const char* fss);
uint32_t print_shader_compile_info(uint32_t shader);

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
    virtual void error_callback(int err, const char* desc) = 0;
    virtual void resize_callback( int width, int height) = 0;

    virtual void command(std::string command) = 0;
    virtual void on_log(const std::string_view log){
        std::cerr<<log;
    }
public:
    std::string name_;
    std::string describe_;
};

extern SDLShowcaseBase* sdl_runner_create_showcase();

#define MR_MR_SDL_RUNNER_SHOWCASE(CLASS) \
SDLShowcaseBase* sdl_runner_create_showcase(){\
        return static_cast<SDLShowcaseBase*>(new CLASS());\
}

#endif

#define IMPLEMENT_SDL3_RUNNER


#ifdef IMPLEMENT_SDL3_RUNNER
#include <SDL3/SDL.h>
#include <SDL3/SDL_oldnames.h>
#include <imgui/backends/imgui_impl_opengl3.h>
#include <imgui/backends/imgui_impl_sdl2.h>
#include <ttf/ttf_notosans_sc_level_1s.h>
#include <ttf/ttf_notosans_sc_level_1.h>
#include <ttf/ttf_notosans_sc_level_1_2.h>
#include <ttf/ttf_material_icon.h>
#include <ttf/ttf_font_awesome_solid.h>
#include <ttf/IconsMaterialDesign.h>

#define IMGUI_IMPL_OPENGL_LOADER_CUSTOM
#define IMGUI_DEFINE_MATH_OPERATORS
#include <glad/gl.h>
#include <imgui/backends/imgui_impl_opengl3.cpp>
#include <imgui/backends/imgui_impl_sdl3.cpp>

#if defined(WIN32) || defined(WIN64)
#include <imgui/backends/imgui_impl_win32.cpp>
#endif

#define IMGUI_IMPLEMENTATION
//#define IMGUI_ENABLE_FREETYPE
#include <imgui/misc/single_file/imgui_single_file.h>
#include <imgui/misc/cpp/imgui_stdlib.cpp>

#include "logger.h"
#if !defined(MR_SDL_RUNNER_WIDTH)
#define MR_SDL_RUNNER_WIDTH 0
#endif

#if !defined(MR_SDL_RUNNER_HEIGHT)
#define MR_SDL_RUNNER_HEIGHT 0
#endif

#if USE_GLES3
#define IMGUI_IMPL_OPENGL_ES3
#endif
#if USE_GLES2
#define IMGUI_IMPL_OPENGL_ES2
#endif

#define IMGUI_DEFINE_MATH_OPERATORS
#include <glad/gl.h>
#include <imgui/imgui.h>
#include <spdlog/fmt/fmt.h>

SDLShowcaseBase* showcase = nullptr;
int win_w = MR_SDL_RUNNER_WIDTH;
int win_h = MR_SDL_RUNNER_HEIGHT;

#define kLogTrace 0
#define kLogDebug 1
#define kLogInfo  2
#define kLogWarn  3
#define kLogError 4
const char* lv[] = {"trace","debug","info","warnning","error"};
#define MR_GL_CHECK(level, msg) \
{\
        GLenum gl_error = GL_NO_ERROR;\
        while(GLenum err = glGetError()){\
            showcase->on_log(fmt::format("SDL OpenGL [{}]: {}", lv[level], msg)); \
            gl_error = err;\
    }\
}
#define MR_GL_CHECK_ARGS(level, formator, ...) \
{\
        GLenum gl_error = GL_NO_ERROR;\
        while(GLenum err = glGetError()){\
            showcase->on_log(std::string("SDL OpenGL [") + lv[level] +"] "+ fmt::format(formator,##__VA_ARGS__)); \
            gl_error = err;\
    }\
}

uint32_t create_texture(int width,int height,uint8_t value){
    GLuint target_texture = 0;
    glGenTextures(1,&target_texture);
    MR_GL_CHECK(kLogError,"glGenTextures");
    glBindTexture(GL_TEXTURE_2D, target_texture);
    MR_GL_CHECK(kLogError,"glBindTexture");
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
    MR_GL_CHECK(kLogError,"GL_TEXTURE_MIN_FILTER");
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR);
    MR_GL_CHECK(kLogError,"GL_TEXTURE_MAG_FILTER");
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    MR_GL_CHECK(kLogError,"GL_TEXTURE_WRAP_S");
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    MR_GL_CHECK(kLogError,"GL_TEXTURE_WRAP_T");

    uint8_t* image = new uint8_t[width* height*4];
    memset(image,value,width* height*4);
    glTexImage2D(GL_TEXTURE_2D, 0,
                 GL_RGBA,
                 width, height, 0,
                 GL_RGBA, GL_UNSIGNED_BYTE,
                 image);
    delete [] image;
    MR_GL_CHECK(kLogError,"glTexImage2D");
    return target_texture;
}
uint32_t print_shader_compile_info(uint32_t shader) {

    GLint status = 0;
    GLint count = 0;
    GLchar* error = NULL;

    glGetShaderiv(shader, GL_COMPILE_STATUS, &status);
    if(status) {
        return 0;
    }

    glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &count);
    if (0 == count) {
        return 0;
    }

    error = (GLchar*) malloc(count);
    glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &count);
    if(count <= 0) {
        free(error);
        error = NULL;
        return 0;
    }

    glGetShaderInfoLog(shader, count, NULL, error);

    fprintf(stderr,"SHADER COMPILE ERROR\n");
    fprintf(stderr,"--------------------------------------------------------\n");
    fprintf(stderr,"%s\n", error);
    fprintf(stderr,"--------------------------------------------------------\n");

    free(error);
    error = NULL;

    return -1;
}

uint32_t create_program(const char* vss, const char* fss){

    MR_GL_CHECK(kLogError,"glCreateShader before");
    auto vert = glCreateShader(GL_VERTEX_SHADER);
    MR_GL_CHECK(kLogError,"glCreateShader for vertex shader");
    glShaderSource(vert, 1, &vss, nullptr);
    MR_GL_CHECK(kLogError,"glShaderSource for vertex shader");
    glCompileShader(vert);
    MR_GL_CHECK(kLogError,"glCompileShader for vertex shader");
    print_shader_compile_info(vert);
    MR_GL_CHECK(kLogError,"print_shader_compile_info for vertex shader");

    auto frag = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(frag, 1, &fss, nullptr);
    glCompileShader(frag);
    print_shader_compile_info(frag);
    MR_GL_CHECK(kLogError,"glCreateShader for fragment shader");

    auto prog = glCreateProgram();
    glAttachShader(prog, vert);
    glAttachShader(prog, frag);
    glLinkProgram(prog);
    MR_GL_CHECK(kLogError,"create program");
    return prog;
}


int main(int argc, char *argv[])
{
    showcase = sdl_runner_create_showcase();

    cxxopts::Options options(showcase->name_, showcase->describe_);
    options.add_options()
        ("g,graphic", "graphic api[direct3d,opengl,opengles2,opengles,metal,vulkan]",cxxopts::value<std::string>()->default_value("")) // a bool parameter
        ("b,backend", "window system backend[glx,egl,wayland,kmsdrm,wgl,agl,eagl,cococa]", cxxopts::value<std::string>()->default_value(""))
        ("v,version", "graphic api version", cxxopts::value<double>()->default_value("0.0"))
        ("s,vsync", "vsync for renderer", cxxopts::value<bool>()->default_value("true"))
        ("h,help", "show help message");

    showcase->on_set_params(options);
    auto result = options.parse(argc,argv);

    if (result.count("help"))
    {
        showcase->on_log( options.help());
        exit(0);
    }

    std::string graphic = result["graphic"].as<std::string>();
    std::string backend = result["backend"].as<std::string>();
    double      version = result["version"].as<double>();
    bool        vsync   = result["vsync"].as<bool>();

    bool show_demo_window_ = false;

    if(graphic.empty())
        graphic = "opengl";

    SDL_Init(SDL_INIT_VIDEO);

    if(graphic.size())
        SDL_SetHint(SDL_HINT_RENDER_DRIVER,graphic.c_str());
    if(backend.size())
        SDL_SetHint(SDL_HINT_VIDEO_DRIVER, backend.c_str());


    uint32_t window_flags = SDL_WINDOW_HIGH_PIXEL_DENSITY;
    const char* glsl_version = "#version 130";
    bool opengl = false;
    if(graphic == "opengl" || graphic == "opengles"){
        opengl = true;
#if !defined(__APPLE__)
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, 0);
#elif(OS_MACOS)
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, SDL_GL_CONTEXT_FORWARD_COMPATIBLE_FLAG); // Always required on Mac
#endif
        if(graphic == "opengles"){
            SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_ES);
        }
        else{
            SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
        }

        double intpart = 0,fractpart = 0;
        fractpart = modf (version , &intpart);
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, int(intpart));
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, int(fractpart*10));

        SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
        SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 8);
        SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 8);
        SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
        SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE, 8);
        SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
        window_flags = (SDL_WindowFlags)(SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);
    }

// From 2.0.18: Enable native IME.
#ifdef SDL_HINT_IME_SHOW_UI
    SDL_SetHint(SDL_HINT_IME_SHOW_UI, "1");
#endif

    showcase->on_pre_init(result,window_flags);

#if defined(WIN32) || defined(WIN64)
    ImGui_ImplWin32_EnableDpiAwareness();
    config_windows_dpi_awareness();
#endif

    if(win_w == 0){
        // SDL_DisplayMode mode;
        auto mode = SDL_GetCurrentDisplayMode(SDL_GetPrimaryDisplay());
        win_w = mode->w * 0.8;
        win_h = mode->h * 0.8;
    }
    SDL_Window* window = SDL_CreateWindow(showcase->name_.c_str(),win_w, win_h, window_flags);
    SDL_GLContext gl_context = NULL;
    if(opengl){

        gl_context = SDL_GL_CreateContext(window);
        SDL_GL_MakeCurrent(window, gl_context);
        SDL_GL_SetSwapInterval(vsync); // Enable vsync
        if (!gladLoaderLoadGL()) {
            printf("Cannot load GL.\n");
            exit(1);
        }

        auto string_get_first_number = [](const char* text)->double{
            if(!text)
                return 0;
            int32_t len = strlen(text);
            for(int index = 0; index < len ; index++){
                char ch = text[index];
                if( ch > '0' && ch <= '9'){
                    return atof(text + index);
                }
            }
            return 0;
        };

        const char* vendor_str = (const char*)glGetString(GL_VENDOR);
        const char* renderer_str = (const char*)glGetString(GL_RENDERER);
        const char* version_str = (const char*)glGetString(GL_VERSION);


        if(version == 0)
            version = version_str?string_get_first_number(version_str):4.1;

        if(version == 2.0){
            // GL ES 2.0 + GLSL 100
            glsl_version = "#version 100";
        }
        else if(version >= 3.0 && version < 3.2){
            glsl_version = "#version 130";
        }
        else{
            glsl_version = "#version 150";
        }
        fprintf(stderr,"Vendor:%s\nRenderer:%s\nVersion:%s\n GL_Version:%.2f\n GLSL_Version:%s\n",
                vendor_str?vendor_str:"NULL",
                renderer_str?renderer_str:"NULL",
                version_str?version_str:"NULL",
                version,
                glsl_version);
    }

    //    SDL_AddEventWatch([](void *userdata, SDL_Event * event)->int{
    //        SDLShowcaseBase* showcase = (SDLShowcaseBase*)userdata;
    //        if (event->type == SDL_WINDOWEVENT &&
    //              event->window.event == SDL_WINDOWEVENT_RESIZED) {
    //            SDL_Window* win = SDL_GetWindowFromID(event->window.windowID);
    //            showcase->resize_callback(event->window.data1,event->window.data2);
    //          }
    //    }, showcase);

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
    // Setup Dear ImGui style
    ImGui::StyleColorsDark();

    if(graphic == "opengl" || graphic == "opengles"){
        ImGui_ImplSDL3_InitForOpenGL(window, gl_context);
        ImGui_ImplOpenGL3_Init(glsl_version);
    }

    SDL_GetWindowSize(window, &win_w, &win_h);


    int gl_width = 1920;
    int gl_height = 1080;
    SDL_GetWindowSizeInPixels(window,&gl_width, &gl_height);

    auto mode = SDL_GetCurrentDisplayMode(SDL_GetPrimaryDisplay());
    auto global_scale  = std::max(mode->w / 1920.0, 1.0);
    float baseFontSize = 17.0f * global_scale;
    ImFontConfig icons_config;
    icons_config.PixelSnapH = true;
    icons_config.OversampleV = icons_config.OversampleH = gl_width*1.0/mode->w;
    icons_config.MergeMode = false;
    ImGui::GetIO().Fonts->AddFontFromMemoryCompressedBase85TTF(notosans_sc_level_1_compressed_data_base85,baseFontSize,&icons_config,io.Fonts->GetGlyphRangesChineseFull());

    icons_config.GlyphMinAdvanceX = baseFontSize;
    icons_config.MergeMode = true;
    static const ImWchar icons_ranges[] = { ICON_MIN_MD, ICON_MAX_16_MD, 0 };
    ImGui::GetIO().Fonts->AddFontFromMemoryCompressedBase85TTF(font_awesome_solid_compressed_data_base85,baseFontSize,&icons_config,icons_ranges);

    showcase->on_init(window,win_w, win_h);
    ImGui::GetIO().Fonts->Build();

    glDisable(GL_DEPTH_TEST);
    MR_GL_CHECK(kLogError, "glDisable(GL_DEPTH_TEST)");
    glDisable(GL_DITHER);
    MR_GL_CHECK(kLogError, "glDisable(GL_DITHER)");
    glEnable(GL_BLEND);
    MR_GL_CHECK(kLogError, "glEnable(GL_BLEND)");
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    MR_GL_CHECK(kLogError,"glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA)");

    bool done = false;
    while (!done){
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            ImGui_ImplSDL3_ProcessEvent(&event);
            switch (event.type) {
            case SDL_EVENT_KEY_DOWN:
            case SDL_EVENT_KEY_UP:{
                if('b' == event.key.key && event.key.type == SDL_EVENT_KEY_DOWN)
                    show_demo_window_ = !show_demo_window_;
                if(SDLK_ESCAPE == event.key.key)
                    done = true;
                showcase->key_callback(event.key.key,
                                       event.key.type,
                                       event.key.scancode,
                                       event.key.mod);
                break;
            }
            case SDL_EVENT_TEXT_INPUT:{
                //showcase->char_callback(event.text.text,
                //                       event.text.type);
            }
            case SDL_EVENT_MOUSE_BUTTON_DOWN:
            case SDL_EVENT_MOUSE_BUTTON_UP:{
                showcase->button_callback(event.button.button,
                                          event.button.type,
                                          event.button.clicks,
                                          event.button.x,
                                          event.button.y);
                break;
            }
            case SDL_EVENT_MOUSE_MOTION:{
                showcase->cursor_callback(event.motion.x,event.motion.y);
                break;
            }
            case SDL_EVENT_WINDOW_RESIZED:{
                win_w = event.window.data1;
                win_h = event.window.data2;
                showcase->resize_callback(win_w,win_h);
                break;
            }
            default:
                break;
            }
            if (event.type == SDL_EVENT_QUIT)
                done = true;
            if (event.type == SDL_EVENT_WINDOW_CLOSE_REQUESTED && event.window.windowID == SDL_GetWindowID(window))
                done = true;
        }

        glViewport(0, 0, win_w, win_h);

        if(opengl){
            ImGui_ImplOpenGL3_NewFrame();
            MR_GL_CHECK(kLogError, "ImGui_ImplOpenGL3_NewFrame()");
        }
        ImGui_ImplSDL3_NewFrame();
        MR_GL_CHECK(kLogError, "ImGui_ImplGlfw_NewFrame()");
        ImGui::NewFrame();
        MR_GL_CHECK(kLogError, "ImGui::NewFrame()");

        showcase->on_frame();


        if(show_demo_window_)
            ImGui::ShowDemoWindow(&show_demo_window_);

        ImGui::Render();
        MR_GL_CHECK(kLogError, "ImGui::Render()");
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        MR_GL_CHECK(kLogError, "ImGui::GetDrawData()");

        SDL_GL_SwapWindow(window);
    }

    showcase->on_deinit();

    delete showcase;
    return 0;
}

#endif // SDL3_RUNNER_H
