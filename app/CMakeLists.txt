set(EXE_SOURCES
    "main.cpp")

add_executable(${EXECTUABLE_NAME} ${EXE_SOURCES})
target_link_libraries(${EXECTUABLE_NAME} PUBLIC ${LIBRARY_NAME}
nlohmann_json)