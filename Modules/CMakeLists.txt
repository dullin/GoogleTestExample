project(Modules)


set(HEADER_FILES module1.h)
set(SOURCE_FILES module1.c )

add_library(Modules STATIC ${SOURCE_FILES} ${HEADER_FILES})