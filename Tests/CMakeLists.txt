project(FirstCProject_test)

add_subdirectory(googletest)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runTests test.cpp)

target_link_libraries(runTests gtest gtest_main)
target_link_libraries(runTests Modules)
