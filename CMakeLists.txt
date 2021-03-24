cmake_minimum_required(VERSION 3.17)
project(forme_geometrice_1512_2021)

add_compile_options(-std=c++20 -pedantic)

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    add_compile_options(-fprofile-instr-generate -fcoverage-mapping)
    add_link_options(-fprofile-instr-generate)
    #Uncomment in case of linker errors
    #link_libraries(clang_rt.profile-x86_64)
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    add_compile_options(--coverage)
    #Uncomment in case of linker errors
    link_libraries(gcov)
endif ()

add_executable(forme_geometrice_1512_2021
        main.cpp
        Cerc.cpp Plansa.cpp Plansa.h Toolbar.cpp Toolbar.h Forma.cpp Forma.h)
