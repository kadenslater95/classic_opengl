cmake_minimum_required(VERSION 3.16)

project(classic_opengl LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Always show warnings by default.
# Also, logic in case you are using windows toolchain.
if (MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall)
endif()

add_subdirectory(example)
