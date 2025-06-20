/*  remove source file 
    removeCommand
*/
#include "commands.h"

void removeCommand(std::string commName){
    std::string command1 = "sudo rm /usr/local/include/" + commName;
    std::string command2 = "sudo rm /usr/local/bin/" + commName;
    system(command1.c_str());
    system(command2.c_str());
}