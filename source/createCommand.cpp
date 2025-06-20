/*  create source file 
    createCommand
*/
#include "commands.h"

void createCommand(std::string filePath, std::string commName){
    std::cout << "Creating '" << commName << "' command from file: \"" << filePath <<"\"\n";
    std::string command1 = "sudo cp " + filePath + " /usr/local/bin/" + commName;
    std::string command2 = "sudo chmod +x /usr/local/bin/" + commName;
    system(command1.c_str());
    system(command2.c_str());
}