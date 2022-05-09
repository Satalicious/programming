cmake_minimum_required(VERSION 3.18)
project(free_store VERSION 1.0)

# -Wconversion currently has many warnings due to issue in libcriterion
# see https://github.com/Snaipe/Criterion/discussions/441
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11 -Wall -Wextra")
set(CMAKE_C_STANDARD 11)

include(CTest)

set(C_SRCS  # all non-main source files
  create_arrays.c
  int_array.c
)

add_executable(${PROJECT_NAME} main.c ${C_SRCS})

foreach(sourcefile ${C_SRCS})
  string(REPLACE ".c" "_test.c" testfile ${sourcefile})
  string(REPLACE ".c" "" testexecutable ${testfile})
  message(STATUS "${sourcefile} + ${testfile} => ${testexecutable}")
  add_executable(${testexecutable} ${sourcefile} ${testfile})
  target_link_libraries(${testexecutable} criterion)
  add_test(NAME ${testexecutable}
           COMMAND ${testexecutable})
endforeach()
