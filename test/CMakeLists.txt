set(GTEST_DIR "../../googletest"
    CACHE PATH "The path to the Google test framework.")
include_directories(SYSTEM ${GTEST_DIR}/gtest/include
                           ${GTEST_DIR}/include)
add_subdirectory(ch08)
add_subdirectory(ch09)

add_subdirectory(${GTEST_DIR} ${CMAKE_BINARY_DIR}/gtest)
set_property(TARGET gtest APPEND_STRING PROPERTY COMPILE_FLAGS " -w")

add_executable(unit-tests $<TARGET_OBJECTS:ch08-test> 
  $<TARGET_OBJECTS:ch09-test>)
link_directories(${CMAKE_BINARY_DIR}/../src)
target_link_libraries(unit-tests production gtest_main)
add_test(unit-tests unit-tests)
add_custom_command(TARGET unit-tests
  POST_BUILD
  COMMAND unit-tests
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
  COMMENT "Running unit-tests" VERBATIM)
add_custom_target(check
  COMMAND unit-tests
  DEPENDS unit-tests
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
  COMMENT "Running unit-tests" VERBATIM)
