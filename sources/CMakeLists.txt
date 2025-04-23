cmake_minimum_required(VERSION 3.10)
project(mrcommon)
SET(SOURCE_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})
SET(CMAKE_CXX_STANDARD 17)
include_directories(/opt/homebrew/include)
link_directories(/opt/homebrew/lib)

########################### GLAD
SET(GLAD_SOURCE "")
if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    LIST(APPEND
        GLAD_SOURCE
        ${SOURCE_ROOT_DIR}/glad/src/egl.c
        ${SOURCE_ROOT_DIR}/glad/src/glx.c
        ${SOURCE_ROOT_DIR}/glad/src/gl.c
        ${SOURCE_ROOT_DIR}/glad/src/gles2.c
        ${SOURCE_ROOT_DIR}/glad/src/vulkan.c
    )
elseif(${CMAKE_SYSTEM_NAME} MATCHES "Android")
    LIST(APPEND
        GLAD_SOURCE
        ${SOURCE_ROOT_DIR}/glad/src/egl.c
        ${SOURCE_ROOT_DIR}/glad/src/gles2.c
        ${SOURCE_ROOT_DIR}/glad/src/vulkan.c
        )
elseif(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
    LIST(APPEND
        GLAD_SOURCE
        ${SOURCE_ROOT_DIR}/glad/src/egl.c
        ${SOURCE_ROOT_DIR}/glad/src/wgl.c
        ${SOURCE_ROOT_DIR}/glad/src/gl.c
        ${SOURCE_ROOT_DIR}/glad/src/gles2.c
        ${SOURCE_ROOT_DIR}/glad/src/vulkan.c
    )
elseif(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
    LIST(APPEND
        GLAD_SOURCE
        ${SOURCE_ROOT_DIR}/glad/src/egl.c
        ${SOURCE_ROOT_DIR}/glad/src/gl.c
        ${SOURCE_ROOT_DIR}/glad/src/gles2.c
    )
endif()



file( GLOB GLAD_HEADER glad/include/glad/*.h )
add_library( glad STATIC ${GLAD_SOURCE} ${GLAD_HEADER})
target_include_directories(glad PUBLIC ${SOURCE_ROOT_DIR}/glad/include)
set_property(TARGET glad PROPERTY POSITION_INDEPENDENT_CODE ON)
install(DIRECTORY glad/include/ DESTINATION include)
install(TARGETS glad DESTINATION lib)  

file( GLOB LUA_SOURCE lua/*.c )
add_library( lua STATIC ${LUA_SOURCE})
target_include_directories(lua PUBLIC ${SOURCE_ROOT_DIR}/lua)
set_property(TARGET lua PROPERTY POSITION_INDEPENDENT_CODE ON)
set_target_properties(lua PROPERTIES PUBLIC_HEADER "lua/lua.h;lua/lauxlib.h;lua/lualib.h;lua/luaconf.h")
install(TARGETS lua PUBLIC_HEADER  DESTINATION include/lua )
install(TARGETS lua DESTINATION lib)                                                                       

add_library( compressor STATIC compressor/miniz.c compressor/zstd.c)
target_include_directories(compressor PRIVATE  ${SOURCE_ROOT_DIR}/../include)
install(TARGETS compressor  DESTINATION lib)




add_subdirectory(minizip)
