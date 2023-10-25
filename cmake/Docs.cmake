find_package(Doxygen)

if(DOXYGEN_FOUND)
    add_custom_target(
        docs  
        ${DOXYGEN_EXECUTABLE}
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/docs
    )#define to bring to the console
    #CMAKE_SOURCE_DIR alway points to the CMakeLists.txt in the main directory
    #CMAKE_BINARY_DIR refers to the cmake in the build directory
endif()