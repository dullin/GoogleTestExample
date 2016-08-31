cmake_minimum_required(VERSION 3.1)
project(GoogleTestExample)

if (APPLE)
    add_definitions(-DGTEST_USE_OWN_TR1_TUPLE)
    add_definitions(-D__GLIBCXX__)
endif (APPLE)


if (CYGWIN)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu11")
else(CYGWIN)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11")
endif(CYGWIN)

set(SOURCE_FILES main.c)
add_executable(GoogleTestExample ${SOURCE_FILES})

include_directories(Modules)

add_subdirectory(Tests)
add_subdirectory(Modules)

target_link_libraries(GoogleTestExample Modules)

#if ($ENV{CLION_IDE})
#    message("Call cmake command from the CLion IDE")
#    set(CALENDAR_PATH_VAR "test")
#    set(CALENDAR_DIR_VAR "test")
#endif ()