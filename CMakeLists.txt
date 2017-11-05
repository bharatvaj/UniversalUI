cmake_minimum_required(VERSION 3.0)
project(UniversalUI LANGUAGES C CXX VERSION 0.5 DESCRIPTION "Universal Logging library for C")
file(GLOB_RECURSE UniversalUI_HDRS "include/*.hpp")
file(GLOB_RECURSE UniversalUI_SRCS "src/*.cpp")


configure_file( ${PROJECT_SOURCE_DIR}/config.h.in ${PROJECT_SOURCE_DIR}/include/config.h)

add_library(UniversalUI STATIC ${UniversalUI_HDRS} ${UniversalUI_SRCS})
target_include_directories(UniversalUI PUBLIC include)
set_target_properties(UniversalUI PROPERTIES SOVERSION 1)
include_directories(${PROJECT_SOURCE_DIR}/include)
add_subdirectory(${PROJECT_SOURCE_DIR}/uui_modules/FLTKUI ${PROJECT_SOURCE_DIR}/uui_modules/FLTKUI/build)
add_subdirectory(${PROJECT_SOURCE_DIR}/uui_modules/CharacterUI ${PROJECT_SOURCE_DIR}/uui_modules/CharacterUI/build)
target_link_libraries(UniversalUI FLTKUI)
target_link_libraries(UniversalUI CharacterUI)
