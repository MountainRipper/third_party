cmake_minimum_required(VERSION 3.10)
project(mrcommon)
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

include_directories(/opt/homebrew/inlude)
link_directories(/opt/homebrew/lib)

file( GLOB GLAD_HEADER glad/include/glad/*.h )
add_library( glad STATIC ${GLAD_SOURCE} ${GLAD_HEADER})
target_include_directories(glad PUBLIC ${SOURCE_ROOT_DIR}/glad/include)
set_property(TARGET glad PROPERTY POSITION_INDEPENDENT_CODE ON)
install(DIRECTORY glad/include/ DESTINATION include)
install(TARGETS glad DESTINATION lib)                                                                      

add_library( compressor STATIC compressor/miniz.c compressor/zstd.c)
target_include_directories(compressor PRIVATE  ${SOURCE_ROOT_DIR}/../include)
install(TARGETS compressor  DESTINATION lib)

file( GLOB IMGUI_STB_BUNDEL_SOURCE imgui_stb_bundle/*.cpp )
add_library( imgui_stb STATIC  ${IMGUI_STB_BUNDEL_SOURCE})
target_link_libraries(imgui_stb PUBLIC glad)
target_include_directories(imgui_stb PRIVATE ${SOURCE_ROOT_DIR} ${CMAKE_INSTALL_PREFIX}/include ${SOURCE_ROOT_DIR}/../include ${SOURCE_ROOT_DIR}/../include/imgui)
install(TARGETS imgui_stb DESTINATION lib)

file( GLOB MR_COMMON_SOURCE mrcommon/*.cpp )
add_library( mrcommon STATIC  ${MR_COMMON_SOURCE})
target_include_directories(mrcommon PRIVATE mrcommon/include ${CMAKE_INSTALL_PREFIX}/include ${SOURCE_ROOT_DIR}/../include ${SOURCE_ROOT_DIR}/../include/imgui)
target_link_libraries(mrcommon PUBLIC spdlog imgui_stb)
set_property(TARGET mrcommon PROPERTY POSITION_INDEPENDENT_CODE ON)
install(DIRECTORY mrcommon/include/ DESTINATION include/mrcommon)
install(TARGETS mrcommon DESTINATION lib)



add_subdirectory(minizip)
