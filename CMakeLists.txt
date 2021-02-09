cmake_minimum_required(VERSION 3.17)
project(timber)

set(CMAKE_CXX_STANDARD 14)

add_executable(timber timber.cpp)

set(SFML_INCLUDE_DIR "/usr/local/Cellar/sfml/2.5.1/include")
set(SFML_LIBRARY_DIR "/usr/local/Cellar/sfml/2.5.1/lib")

link_directories(SFML_LIBRARY_DIR)
include_directories(SFML_INCLUDE_DIR)

find_package(SFML 2.5.1 COMPONENTS system window graphics audio)

find_package(SFML REQUIRED graphics window system)
target_link_libraries(timber sfml-system sfml-window sfml-graphics sfml-audio)

