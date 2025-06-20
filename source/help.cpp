/*  help source file 
    -h
*/
#include "commands.h"

void help(){
    std::cout  << "actions:\n"
                << "    -h                              | displays help documentation\n"
                << "    create command_name file_path   | creates a command using a file\n"
                << "    update command_name file_path   | updates an existing command using a file\n"
                << "    remove command_name             | removes a command\n"
                << "\n"
                << "arguments:\n"
                << "    command_name    | name for command to use in terminal\n"
                << "    file_path       | path to code file or executable\n";
}