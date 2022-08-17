project(pack-cpp)

cmake_minimum_required(VERSION 3.16)

set(MAIN_PROJECT OFF)
if (CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
    set(MAIN_PROJECT ON)
endif()

include_directories(
    include/
)

if(${MAIN_PROJECT})
    add_subdirectory(example)
endif()
