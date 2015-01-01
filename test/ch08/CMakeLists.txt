set(GTEST_DIR "../../../googletest"
    CACHE PATH "The path to the Google test framework.")

add_subdirectory(${GTEST_DIR} ${CMAKE_BINARY_DIR}/gtest)
set_property(TARGET gtest APPEND_STRING PROPERTY COMPILE_FLAGS " -w")
include_directories(SYSTEM ${GTEST_DIR}/gtest/include
                           ${GTEST_DIR}/include)

include_directories(../../src/ch08)
add_executable(ch08-test charConversionsTest.cc countPairsTest.cc 
  stringLiteralSizeTest.cc 
  swapTest.cc)
LINK_DIRECTORIES(${CMAKE_BINARY_DIR}/../../src/ch08)
target_link_libraries(ch08-test ch08 gtest_main)

add_test(ch08-test ch08-test)
