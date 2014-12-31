add_executable(hello3 hello.cc)

add_executable(histogram normalDistributionHistogram.cc)
include(ExternalData)

add_executable(regex regex.cc)
add_test(regexTest regex "${CMAKE_CURRENT_LIST_DIR}/names.txt")

add_executable(timedLoop timedLoop.cc)
add_test(timedLoopTest timedLoop)
