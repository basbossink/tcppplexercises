add_executable(hello3 hello.cc)

add_executable(histogram normalDistributionHistogram.cc)
add_test(histogramTest histogram)

add_executable(regex regex.cc)
add_test(regexTest regex "${CMAKE_CURRENT_LIST_DIR}/names.txt")

add_executable(timedLoop timedLoop.cc)
add_test(timedLoopTest timedLoop)
