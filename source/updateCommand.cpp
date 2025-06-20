/*  update source file
    updateCommand
*/
#include "commands.h"

void updateCommand(std::string filePath, std::string commName){
    std::string command0 = "sudo rm /usr/local/bin/" + commName;
    std::string command1 = "sudo cp " + filePath + " /usr/local/bin/" + commName;
    std::string command2 = "sudo chmod +x /usr/local/bin/" + commName;
    system(command0.c_str());
    system(command1.c_str());
    system(command2.c_str());
}