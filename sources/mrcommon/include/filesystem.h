#ifndef MR_COMMON_FILESYSTEM_H_
#define MR_COMMON_FILESYSTEM_H_

#include <string>
namespace mr {

std::string current_executable_path();
std::string current_executable_dir();
std::string merge_paths(std::string parent, std::string child);

}

#endif
