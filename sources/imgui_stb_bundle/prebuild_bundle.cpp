#define IMGUI_IMPL_OPENGL_LOADER_CUSTOM
#define IMGUI_DEFINE_MATH_OPERATORS
#include <glad/gl.h>
#include <imgui/backends/imgui_impl_opengl3.cpp>
#include <imgui/backends/imgui_impl_sdl2.cpp>

#if defined(WIN32) || defined(WIN64)
#include <imgui/backends/imgui_impl_win32.cpp>
#endif

#define IMGUI_IMPLEMENTATION
//#define IMGUI_ENABLE_FREETYPE
#include <imgui/misc/single_file/imgui_single_file.h>

#include <imgui/misc/cpp/imgui_stdlib.cpp>
