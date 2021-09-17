cmake_minimum_required(VERSION 3.10)
project(testRegex)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES testRegex.hpp
                 testRegex.cpp
)

add_executable(testRegex ${SOURCE_FILES})

target_compile_options(${PROJECT_NAME}
        PRIVATE
                $<$<CXX_COMPILER_ID:MSVC>:
                        /MP /W3 /Zf
                        $<$<CONFIG:Debug>:/MTd>
                        $<$<CONFIG:Release>:/MT>>
                $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:GNU>>:
                        -Wall -Wextra -Werror -pipe -g>
)