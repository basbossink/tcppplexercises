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

set(GTEST_DIR "/usr/include/gtest"
    CACHE PATH "The path to the Google test framework.")
include_directories(SYSTEM ${GTEST_DIR})
add_subdirectory(ch08)
add_subdirectory(ch09)

add_subdirectory(/usr/src/gtest ${CMAKE_BINARY_DIR}/gtest)
set_property(TARGET gtest APPEND_STRING PROPERTY COMPILE_FLAGS " -w")

add_executable(unit-tests $<TARGET_OBJECTS:ch08-test> 
  $<TARGET_OBJECTS:ch09-test>)
link_directories(${CMAKE_BINARY_DIR}/../src)
target_link_libraries(unit-tests production gtest_main)
add_test(gtest-tests unit-tests)
add_custom_command(TARGET unit-tests
  POST_BUILD
  COMMAND unit-tests
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
  COMMENT "Running gtest-tests" VERBATIM)
add_custom_target(check
  COMMAND unit-tests
  DEPENDS unit-tests
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
  COMMENT "Running gtest-tests" VERBATIM)
