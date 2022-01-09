cmake_minimum_required(VERSION 3.19)
project(flappybird)

set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -pedantic -Werror -DNDEBUG)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -static-libasan")

add_subdirectory(lib/googletest)
#include(cmake/boost.cmake)
# include(cmake/sdl2.cmake)

find_package(SFML COMPONENTS graphics audio system REQUIRED)
include_directories (
    ${GTEST_INCLUDE_DIRS}
    ${GMOCK_INCLUDE_DIRS}
    src
    test
)


#Tests
file (GLOB TEST_SOURCES "test/*.cpp" )
add_executable(${PROJECT_NAME}-ut  ${TEST_SOURCES} src/Game.cpp src/Game.hpp src/Bird.hpp src/Bird.cpp)
target_link_libraries(${PROJECT_NAME}-ut gtest gmock gtest_main sfml-graphics sfml-system sfml-audio)
enable_testing()
add_test(NAME ${PROJECT_NAME}_test COMMAND ${PROJECT_NAME}-ut)

#Main
file (GLOB SOURCES "src/*.cpp" )
add_executable(${PROJECT_NAME}  ${SOURCES} src/Game.cpp src/Game.hpp src/Bird.hpp src/Bird.cpp)
target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-system sfml-audio)

