#include <iostream>
#include "my_lib.h"


#include <nlohmann/json.hpp>

//just do /***/ then hit enter this is for doxygen
//then in the terminal type doxygen 
//then doxygen -g to create a doxyfile that holds the html
/**
 * @brief  Prints out hello world and tests the json lib 
 * 
 */



void display_hello_world(){
     std::cout<<"Hello World"<<std::endl;
    std::cout<<"JSON Lib Version: "
            <<NLOHMANN_JSON_VERSION_MAJOR<<"."
            <<NLOHMANN_JSON_VERSION_MINOR<<"."
            <<NLOHMANN_JSON_VERSION_PATCH<<std::endl;

}