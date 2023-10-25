#include "../src/my_lib/my_lib.h"
#include <iostream>
#include "config.hpp"
#include <nlohmann/json.hpp>

int main(){


    std::cout<<project_name<<std::endl;
    std::cout<<project_version<<std::endl;
    
    std::cout<<"JSON LIB VERSION: "<< NLOHMANN_JSON_VERSION_MAJOR <<"."<< NLOHMANN_JSON_VERSION_MINOR <<"."<< NLOHMANN_JSON_VERSION_PATCH <<std::endl;

    display_hello_world();
    return 0;
}
