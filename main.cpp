#include "source/commands.h"

int main(int argc, char* argv[]){
    std::string rootComm = argv[0];
    std::string action;
    std::string commandName;
    std::string filePath;
    if(argc <= 1){ return errorUsage(argc, argv); }
    else if(rootComm != "command"){ return errorUsage(argc, argv); }
    action = argv[1];
    switch(argc){
        default:
        case 0:
            return errorUsage(argc, argv);
        case 1:
        case 2:
            if(action == "-h"){ help(); }
            else if(action == "create"){ return errorCreate(argc, argv); }
            else if(action == "update"){ return errorUpdate(argc, argv); }
            else if(action == "remove"){ return errorRemove(argc, argv); }
            else{ return errorAction(argc, argv); }   
            break;
        case 3:
            commandName = argv[2];
            std::cout << rootComm << " " << action << "\n";
            if(action == "-h"){ help(); }
            else if(action == "create"){ return errorCreate(argc, argv); }
            else if(action == "update"){ return errorUpdate(argc, argv); }
            else if(action == "remove"){ removeCommand(commandName); }
             
        break;
        case 4:
            commandName = argv[2];
            filePath = argv[3];
            if(action == "create" && filePath[0] == '/'){ createCommand(filePath,commandName); }
            else if(action == "update"){ updateCommand(filePath,commandName); }
            else if(action == "remove"){ removeCommand(commandName); }
        break;
    }
    
    return 0;
}

