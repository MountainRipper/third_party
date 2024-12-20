#include "include/sdl_runner.h"
#include "include/logger.h"
#include <iostream>
#include <SDL2/SDL.h>
#include <imgui/backends/imgui_impl_opengl3.h>
#include <imgui/backends/imgui_impl_sdl2.h>
#include <ttf/ttf_notosans_sc_level_1s.h>
#include <ttf/ttf_notosans_sc_level_1.h>
#include <ttf/ttf_notosans_sc_level_1_2.h>
#include <ttf/ttf_material_icon.h>
#include <ttf/ttf_font_awesome_solid.h>
#include <ttf/IconsMaterialDesign.h>



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

#if __ANDROID__
    #define OS_TYPE 1
    #define OS_ANDROID 1
#elif defined(__linux__) || defined(__LINUX__)
    #define OS_TYPE 2
    #define OS_LINUX 1
#elif defined(_WIN64) || defined(_WIN32)
    #define OS_TYPE 3
   #define OS_WINDOWS 1
   #include <imgui/backends/imgui_impl_win32.h>
#elif __APPLE__
#include "TargetConditionals.h"
    #if TARGET_OS_IPHONE && TARGET_IPHONE_SIMULATOR
        #define OS_TYPE 4
        #define OS_IOS 1
    #elif TARGET_OS_IPHONE
        #define OS_TYPE 4
        #define OS_IOS 1
    #elif TARGET_OS_TVOS
        #define OS_TYPE 5
        #define OS_TVOS 1
    #else
        #define OS_TYPE 6
        #define OS_MACOS 1
    #endif
#elif defined(__FreeBSD__)
#define OS_TYPE 7
    #define OS_BSD 1
    #define OS_FREEBSD 1
#elif defined(__OpenBSD__)
#define OS_TYPE 8
    #define OS_BSD 1
    #define OS_FREEBSD 1
#elif defined(__NetBSD__)
#define OS_TYPE 9
    #define OS_BSD 1
    #define OS_FREEBSD 1
#elif __unix__
    #define OS_TYPE 10
    #define OS_UNIX 1
#elif __posix
    #define OS_TYPE 11
    #define OS_POSIX 1
#else
    #define OS_TYPE 0
#endif

uint32_t create_texture(int width,int height,uint8_t value){
    GLuint target_texture = 0;
    glGenTextures(1,&target_texture);
    MR_GL_CHECK(mr::Logger::kLogLevelError,"glGenTextures");
    glBindTexture(GL_TEXTURE_2D, target_texture);
    MR_GL_CHECK(mr::Logger::kLogLevelError,"glBindTexture");
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
    MR_GL_CHECK(mr::Logger::kLogLevelError,"GL_TEXTURE_MIN_FILTER");
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR);
    MR_GL_CHECK(mr::Logger::kLogLevelError,"GL_TEXTURE_MAG_FILTER");
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    MR_GL_CHECK(mr::Logger::kLogLevelError,"GL_TEXTURE_WRAP_S");
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    MR_GL_CHECK(mr::Logger::kLogLevelError,"GL_TEXTURE_WRAP_T");

    uint8_t* image = new uint8_t[width* height*4];
    memset(image,value,width* height*4);
    glTexImage2D(GL_TEXTURE_2D, 0,
               GL_RGBA,
               width, height, 0,
               GL_RGBA, GL_UNSIGNED_BYTE,
               image);
    delete [] image;
    MR_GL_CHECK(mr::Logger::kLogLevelError,"glTexImage2D");
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

    MR_GL_CHECK(mr::Logger::kLogLevelError,"glCreateShader before");
    auto vert = glCreateShader(GL_VERTEX_SHADER);
    MR_GL_CHECK(mr::Logger::kLogLevelError,"glCreateShader for vertex shader");
    glShaderSource(vert, 1, &vss, nullptr);
    MR_GL_CHECK(mr::Logger::kLogLevelError,"glShaderSource for vertex shader");
    glCompileShader(vert);
    MR_GL_CHECK(mr::Logger::kLogLevelError,"glCompileShader for vertex shader");
    print_shader_compile_info(vert);
    MR_GL_CHECK(mr::Logger::kLogLevelError,"print_shader_compile_info for vertex shader");

    auto frag = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(frag, 1, &fss, nullptr);
    glCompileShader(frag);
    print_shader_compile_info(frag);
    MR_GL_CHECK(mr::Logger::kLogLevelError,"glCreateShader for fragment shader");

    auto prog = glCreateProgram();
    glAttachShader(prog, vert);
    glAttachShader(prog, frag);
    glLinkProgram(prog);
    MR_GL_CHECK(mr::Logger::kLogLevelError,"create program");
    return prog;
}

SDLShowcaseBase* showcase = nullptr;
int win_w = MR_SDL_RUNNER_WIDTH;
int win_h = MR_SDL_RUNNER_HEIGHT;

#if defined(WIN32)
#undef main
#include <windows.h>
void config_windows_dpi_awareness(){
    typedef enum PROCESS_DPI_AWARENESS {
        PROCESS_DPI_UNAWARE = 0,
        PROCESS_SYSTEM_DPI_AWARE = 1,
        PROCESS_PER_MONITOR_DPI_AWARE = 2
    } PROCESS_DPI_AWARENESS;

    void* userDLL;
    BOOL(WINAPI *SetProcessDPIAware)(void); // Vista and later
    void* shcoreDLL;
    HRESULT(WINAPI *SetProcessDpiAwareness)(PROCESS_DPI_AWARENESS dpiAwareness); // Windows 8.1 and later

    userDLL = SDL_LoadObject("USER32.DLL");
    if (userDLL) {
    SetProcessDPIAware = (BOOL(WINAPI *)(void)) SDL_LoadFunction(userDLL, "SetProcessDPIAware");
    }

    shcoreDLL = SDL_LoadObject("SHCORE.DLL");
    if (shcoreDLL) {
    SetProcessDpiAwareness = (HRESULT(WINAPI *)(PROCESS_DPI_AWARENESS)) SDL_LoadFunction(shcoreDLL, "SetProcessDpiAwareness");
    }

    if (SetProcessDpiAwareness) {
    /* Try Windows 8.1+ version */
    HRESULT result = SetProcessDpiAwareness(PROCESS_PER_MONITOR_DPI_AWARE);
    SDL_Log("called SetProcessDpiAwareness: %d", (result == S_OK) ? 1 : 0);
    }
    else if (SetProcessDPIAware) {
    /* Try Vista - Windows 8 version.
    This has a constant scale factor for all monitors.
    */
    BOOL success = SetProcessDPIAware();
    SDL_Log("called SetProcessDPIAware: %d", (int)success);
    }
    SDL_SetHint(SDL_HINT_WINDOWS_DPI_SCALING ,"1");
}
#endif
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
      std::cout << options.help() << std::endl;
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

    SDL_SetHint(SDL_HINT_RENDER_DRIVER,graphic.c_str());
    SDL_setenv("SDL_VIDEODRIVER", backend.c_str(), 1);

    uint32_t window_flags = SDL_WINDOW_SHOWN;
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
        window_flags = (SDL_WindowFlags)(SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
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
        SDL_DisplayMode mode;
        SDL_GetDesktopDisplayMode(0,&mode);
        win_w = mode.w * 0.8;
        win_h = mode.h * 0.8;
    }
    SDL_Window* window = SDL_CreateWindow(showcase->name_.c_str(), SDL_WINDOWPOS_CENTERED_DISPLAY(0), SDL_WINDOWPOS_CENTERED_DISPLAY(0), win_w, win_h, window_flags);
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
        ImGui_ImplSDL2_InitForOpenGL(window, gl_context);
        ImGui_ImplOpenGL3_Init(glsl_version);
    }

    SDL_GetWindowSize(window, &win_w, &win_h);


    int gl_width = 1920;
    int gl_height = 1080;
    SDL_GL_GetDrawableSize(window,&gl_width, &gl_height);
    SDL_DisplayMode mode;
    SDL_GetCurrentDisplayMode(SDL_GetWindowDisplayIndex(window),&mode);
    auto global_scale  = std::max(mode.w / 1920.0, 1.0);
    float baseFontSize = 17.0f * global_scale;
    ImFontConfig icons_config;
    icons_config.PixelSnapH = true;
    icons_config.OversampleV = icons_config.OversampleH = gl_width*1.0/mode.w;
    icons_config.MergeMode = false;
    ImGui::GetIO().Fonts->AddFontFromMemoryCompressedBase85TTF(notosans_sc_level_1_compressed_data_base85,baseFontSize,&icons_config,io.Fonts->GetGlyphRangesChineseFull());

    icons_config.GlyphMinAdvanceX = baseFontSize;
    icons_config.MergeMode = true;
    static const ImWchar icons_ranges[] = { ICON_MIN_MD, ICON_MAX_16_MD, 0 };
    ImGui::GetIO().Fonts->AddFontFromMemoryCompressedBase85TTF(font_awesome_solid_compressed_data_base85,baseFontSize,&icons_config,icons_ranges);

    showcase->on_init(window,win_w, win_h);
    ImGui::GetIO().Fonts->Build();

    glDisable(GL_DEPTH_TEST);
    MR_GL_CHECK(mr::Logger::kLogLevelError, "glDisable(GL_DEPTH_TEST)");
    glDisable(GL_DITHER);
    MR_GL_CHECK(mr::Logger::kLogLevelError, "glDisable(GL_DITHER)");
    glEnable(GL_BLEND);
    MR_GL_CHECK(mr::Logger::kLogLevelError, "glEnable(GL_BLEND)");
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    MR_GL_CHECK(mr::Logger::kLogLevelError,"glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA)");

    bool done = false;
    while (!done){
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            ImGui_ImplSDL2_ProcessEvent(&event);
            switch (event.type) {
            case SDL_KEYDOWN:
            case SDL_KEYUP:{
                if('b' == event.key.keysym.sym && event.key.type == SDL_KEYDOWN)
                    show_demo_window_ = !show_demo_window_;
                if(SDLK_ESCAPE == event.key.keysym.sym)
                    done = true;
                showcase->key_callback(event.key.keysym.sym,
                                       event.key.type,
                                       event.key.keysym.scancode,
                                       event.key.keysym.mod);
                break;
            }
            case SDL_TEXTINPUT:{
                //showcase->char_callback(event.text.text,
                //                       event.text.type);
            }
            case SDL_MOUSEBUTTONDOWN:
            case SDL_MOUSEBUTTONUP:{
                showcase->button_callback(event.button.button,
                                          event.button.type,
                                          event.button.clicks,
                                          event.button.x,
                                          event.button.y);
                break;
            }
            case SDL_MOUSEMOTION:{
                showcase->cursor_callback(event.motion.x,event.motion.y);
                break;
            }
            case SDL_WINDOWEVENT:{
                if (event.window.event == SDL_WINDOWEVENT_RESIZED) {
                    win_w = event.window.data1;
                    win_h = event.window.data2;
                    showcase->resize_callback(win_w,win_h);
                }
                break;
            }
            default:
            break;
            }
            if (event.type == SDL_QUIT)
                done = true;
            if (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_CLOSE && event.window.windowID == SDL_GetWindowID(window))
                done = true;
        }

        glViewport(0, 0, win_w, win_h);

        if(opengl){
            ImGui_ImplOpenGL3_NewFrame();
            MR_GL_CHECK(mr::Logger::kLogLevelError, "ImGui_ImplOpenGL3_NewFrame()");
        }
        ImGui_ImplSDL2_NewFrame();
        MR_GL_CHECK(mr::Logger::kLogLevelError, "ImGui_ImplGlfw_NewFrame()");
        ImGui::NewFrame();
        MR_GL_CHECK(mr::Logger::kLogLevelError, "ImGui::NewFrame()");

        showcase->on_frame();


        if(show_demo_window_)
            ImGui::ShowDemoWindow(&show_demo_window_);

        ImGui::Render();
        MR_GL_CHECK(mr::Logger::kLogLevelError, "ImGui::Render()");
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        MR_GL_CHECK(mr::Logger::kLogLevelError, "ImGui::GetDrawData()");

        SDL_GL_SwapWindow(window);
    }

    showcase->on_deinit();

    delete showcase;
    return 0;
}

