set(LIBRARY_SOURCES
   "my_lib.cpp")

set(LIBRARY_HEADERS
    "my_lib.h")

set(LIBRARY_INCLUDES
    "./"
    "${CMAKE_BINARY_DIR}/configured_files/include"
)



add_library(${LIBRARY_NAME} STATIC 
           ${LIBRARY_SOURCES}
           ${LIBRARY_HEADERS})
target_include_directories(${LIBRARY_NAME} PUBLIC 
    ${LIBRARY_INCLUDES})

target_link_libraries(${LIBRARY_NAME} PUBLIC 
    nlohmann_json::nlohmann_json
)#need to go to the github and check the main cmakelists.txt and search for add_lib