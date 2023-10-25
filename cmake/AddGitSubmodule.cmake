function(add_git_submodule dir)
    find_package(Git REQUIRED) #should find git on computer 

    if(NOT EXISTS ${dir}/CMakeLists.txt) #if no cmake file in exernal dir 
        execute_process(COMMAND ${GIT_EXECUTABLE}
        submodule update --init --recursive --${dir} #add recursively
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}) #pull changes from external lib to get cmake files
    endif()

    add_subdirectory(${dir}) #this is for the nlohmann lib in the external/json dir. The directory must contain a cmake file
endfunction(add_git_submodule)

#find git to recursively cloning sub modules and call add sub funciton(())
#use git_submodules if its a git repo AND has a cmake file  