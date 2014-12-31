add_executable(hello1 hello.cc) 
add_pexpect_test(hello1 ${CMAKE_CURRENT_SOURCE_DIR}/../../test/ch05/hello_test.py)
