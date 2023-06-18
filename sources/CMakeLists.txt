cmake_minimum_required(VERSION 3.10)
project(mr-common)
SET(SOURCE_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

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

add_library( compressor STATIC compressor/miniz.c compressor/zstd.c compressor/zstddeclib.c)
target_include_directories(compressor PRIVATE  ${SOURCE_ROOT_DIR}/../include)
install(TARGETS compressor  DESTINATION lib)

add_library( mr-common STATIC  mr-common/imgui_mr.cpp mr-common/logger.cpp mr-common/easylogging++.cpp)
target_include_directories(mr-common PRIVATE ${CMAKE_INSTALL_PREFIX}/include ${SOURCE_ROOT_DIR}/../include)
target_link_libraries(mr-common spdlog)
set_property(TARGET mr-common PROPERTY POSITION_INDEPENDENT_CODE ON)
install(TARGETS mr-common DESTINATION lib)

add_subdirectory(minizip)
