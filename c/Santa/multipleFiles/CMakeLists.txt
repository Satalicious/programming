cmake_minimum_required(VERSION 3.18)
project(multipleSource VERSION 1.0)

# -Wconversion currently has many warnings due to issue in libcriterion
# see https://github.com/Snaipe/Criterion/discussions/441
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11 -Wall -Wextra")
set(CMAKE_C_STANDARD 11)

# include(CTest)

set(C_SRCS  # all non-main source files
    circuit.c
    ui.c
    inventory.c
    interface.c
)

add_executable(${PROJECT_NAME} main.c ${C_SRCS})
