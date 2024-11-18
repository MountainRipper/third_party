#include <cstring>
#if defined(_WIN32)
#include <windows.h>
#include <Shlwapi.h>
#include <io.h>

#define access _access_s
#endif

#ifdef __APPLE__
#include <libgen.h>
#include <limits.h>
#include <mach-o/dyld.h>
#include <unistd.h>
#endif

#ifdef __linux__
#include <limits.h>
#include <libgen.h>
#include <unistd.h>

#if defined(__sun)
#define PROC_SELF_EXE "/proc/self/path/a.out"
#else
#define PROC_SELF_EXE "/proc/self/exe"
#endif

#endif

#include "include/filesystem.h"
namespace mr {

#if defined(_WIN32)

std::string current_executable_path() {
    char rawPathName[MAX_PATH];
    GetModuleFileNameA(NULL, rawPathName, MAX_PATH);
    return std::string(rawPathName);
}

std::string current_executable_dir() {
    std::string executablePath = current_executable_path();
    char exePath[MAX_PATH];
    strcpy(exePath, executablePath.c_str());
    PathRemoveFileSpecA(exePath);
    std::string directory = std::string(exePath);
    return directory;
}

std::string merge_paths(std::string pathA, std::string pathB) {
    char combined[MAX_PATH];
    PathCombineA(combined, pathA.c_str(), pathB.c_str());
    std::string mergedPath(combined);
    return mergedPath;
}

#endif

#ifdef __linux__

std::string current_executable_path() {
    char rawPathName[PATH_MAX];
    realpath(PROC_SELF_EXE, rawPathName);
    return  std::string(rawPathName);
}

std::string current_executable_dir() {
    std::string executablePath = current_executable_path();
    char *executablePathStr = new char[executablePath.length() + 1];
    strcpy(executablePathStr, executablePath.c_str());
    char* executableDir = dirname(executablePathStr);
    std::string dir_path(executableDir);
    delete [] executablePathStr;
    return dir_path;
}

std::string merge_paths(std::string parent, std::string child) {
    return parent+"/"+child;
}

#endif

#ifdef __APPLE__
std::string current_executable_path() {
    char rawPathName[PATH_MAX];
    char realPathName[PATH_MAX];
    uint32_t rawPathSize = (uint32_t)sizeof(rawPathName);

    if(!_NSGetExecutablePath(rawPathName, &rawPathSize)) {
        realpath(rawPathName, realPathName);
    }
    return  std::string(realPathName);
}

std::string current_executable_dir() {
    std::string executablePath = current_executable_path();
    char *executablePathStr = new char[executablePath.length() + 1];
    strcpy(executablePathStr, executablePath.c_str());
    char* executableDir = dirname(executablePathStr);
    std::string dir_path(executableDir);
    delete [] executablePathStr;
    return dir_path;
}

std::string merge_paths(std::string pathA, std::string pathB) {
    return pathA+"/"+pathB;
}
#endif

}
