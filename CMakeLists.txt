cmake_minimum_required(VERSION 3.10)

project(TopDownShooter)

# Set the C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)

find_package(SFML 2.6 REQUIRED graphics window system)

# Add the source files
file(GLOB SOURCES src/*.cpp)  

add_executable(tds_game ${SOURCES})

target_link_libraries(tds_game sfml-graphics sfml-window sfml-system)
