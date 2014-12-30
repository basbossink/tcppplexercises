cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
project("The C++ Programming Language 4th edition Exercises")

enable_testing()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin/)
set(warnings "-Wall -Wextra -Werror -pedantic-errors")

if (NOT CONFIGURED_ONCE) 
  set(CMAKE_CXX_FLAGS "${warnings}"
    CACHE STRING "Flags used by the compiler during all build types." FORCE)
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(src test)

set(CONFIGURED_ONCE TRUE CACHE INTERNAL
  "A flag showing that CMake has configured at least once.")
