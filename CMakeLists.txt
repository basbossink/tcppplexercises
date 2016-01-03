# Copyright (C) 2015 Bas Bossink <bas.bossink@gmail.com>

# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
project("The C++ Programming Language 4th edition Exercises")

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/Modules)

include(pexpect)
find_package(Threads REQUIRED)
find_package(PythonInterp REQUIRED)
find_program(nosetests NOSETESTS_EXECUTABLE REQUIRED)

enable_testing()

set(flags "-std=c++14 -Wall -Wextra -Werror -Wunused -pedantic-errors")
if (NOT CONFIGURED_ONCE) 
  set(CMAKE_CXX_FLAGS "${flags}"
    CACHE STRING "Flags used by the compiler during all build types." FORCE)
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(src)
add_subdirectory(test)

set(CONFIGURED_ONCE TRUE CACHE INTERNAL
  "A flag showing that CMake has configured at least once.")
