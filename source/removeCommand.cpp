/*  remove source file 
    removeCommand
*/
#include "commands.h"

void removeCommand(std::string commName){
    std::cout << "Removing '" << commName << "' command.\n";
    std::string command1 = "sudo rm /usr/local/bin/" + commName;
    system(command1.c_str());
}