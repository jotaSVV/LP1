cmake_minimum_required(VERSION 3.12)
project(LP1 C)


file(GLOB SOURCES
        main.c
        pr/*.c
        tp/*.c
        tpc/*.c
        )

set(CMAKE_C_STANDARD 99)

add_executable(LP1 ${SOURCES} ${SOURCE_FILES} pr02.c pr02.h pr03.c pr03.h pr04.c pr04.h pr05.c pr05.h)