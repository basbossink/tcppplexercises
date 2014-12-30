add_executable(hello hello.cc)

add_test(helloTests hello)
set_tests_properties (helloTests
  PROPERTIES PASS_REGULAR_EXPRESSION "Hello World")

add_executable(write-out write_out.cc)
string(CONCAT EXPECTED 
  "this is a bool: true\n"
  "this is a char: a\n"
  "this is an int: 37\n"
  "this is a double: 37.42\n"
  "this is a string: Fred is a happy Flinstone.")

add_test(write-outTests write-out)
set_tests_properties(write-outTests
  PROPERTIES PASS_REGULAR_EXPRESSION ${EXPECTED})
