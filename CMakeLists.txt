cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
project("The C++ Programming Language 4th edition Exercises")

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/Modules)

include(pexpect)
find_package(PythonInterp REQUIRED)
find_program(nosetests NOSETESTS_EXECUTABLE REQUIRED)

enable_testing()

set(flags "-std=c++11 -Wall -Wextra -Werror -Wunused -pedantic-errors")
if (NOT CONFIGURED_ONCE) 
  set(CMAKE_CXX_FLAGS "${flags}"
    CACHE STRING "Flags used by the compiler during all build types." FORCE)
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(src)
add_subdirectory(test)

set(CONFIGURED_ONCE TRUE CACHE INTERNAL
  "A flag showing that CMake has configured at least once.")
