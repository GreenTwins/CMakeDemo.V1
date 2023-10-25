#this fetch method is an alternative to the example of 6_external

cmake_minimum_required(VERSION 3.16)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF) #things that are part of the c standard but cpp can use will be considered extensions

set(LIBRARY_NAME Library) #create varialbes to use throughout the cmake proj this is incorporating a string or "auto" for cmake to determine. Can also use these for ints
set(EXECTUABLE_NAME Executable)


#options... turning something on or off

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(AddGitSubmodule)
include(FetchContent)
include(Docs)

FetchContent_Declare(
    nlohmann_json
    GIT_REPOSITORY https://github.com/nlohmann/json
    GIT_TAG v3.11.2
    GIT_SHALLOW TRUE)#wont clone repo recursively 
    #the repo MUST BE A CMAKE PROJECT

FetchContent_MakeAvailable(nlohmann_json) 



add_subdirectory(configured)
add_subdirectory(src)
add_subdirectory(external)
add_subdirectory(app)
