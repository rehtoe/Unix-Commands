/*  error source file */
#include "commands.h"

std::string errorString(ERROR_TYPE errorType){
    switch(int(errorType)){
        default:
        case 0: return "NONE";
        case 10: return "USAGE";
        case 11: return "ACTION";
        case 20: return "CREATE";
        case 21: return "UPDATE";
        case 22: return "REMOVE";
    }
}

int errorUsage(int argc, char* argv[]){
    std::cerr << "COMMAND ERROR " << int(ERROR_TYPE::USAGE) << ": " << errorString(ERROR_TYPE::USAGE) << "\n"
            << "Usage: command action arg1 arg2...\n"
            << "Use 'command -h' for help docs.\n";
    return int(ERROR_TYPE::USAGE); // ERROR_TYPE::USAGE
}

int errorAction(int argc, char* argv[]){
    std::cerr << "COMMAND ERROR " << int(ERROR_TYPE::ACTION) << ": " << errorString(ERROR_TYPE::ACTION) << "\n"
            << "Usage: " << argv[0] << " action arg1 arg2...\n"
            << "Use '" << argv[0] << " -h' for help docs.\n";
    return int(ERROR_TYPE::ACTION);
}

int errorCreate(int argc, char* argv[]){
    std::cerr << "COMMAND ERROR " << int(ERROR_TYPE::CREATE) << ": " << errorString(ERROR_TYPE::CREATE) << "\n"
                << "Usage: sudo " << argv[0] << " create commandName /your/file/path/\n"
                << "sudo: requires sudo to access /usr/local/include/ and /usr/local/bin/\n"
                << "FILE PATH: Absolute Path of your File, Script, or Executable\n"
                << "COMMAND NAME: Name of Command used in terminal such as 'sudo' or 'chmod' 'vim'\n";
    return int(ERROR_TYPE::CREATE); // ERROR_TYPE::CREATE
}

int errorUpdate(int argc, char* argv[]){
    std::cerr << "COMMAND ERROR " << int(ERROR_TYPE::UPDATE) << ": " << errorString(ERROR_TYPE::UPDATE) << "\n"
                << "Usage: sudo " << argv[0] << " update commandName /your/file/path/\n"
                << "sudo: requires sudo to access /usr/local/include/ and /usr/local/bin/\n"
                << "FILE PATH: Absolute Path of your File, Script, or Executable\n"
                << "COMMAND NAME: Name of Command used in terminal such as 'sudo' or 'chmod' 'vim'\n";
    return int(ERROR_TYPE::UPDATE); // ERROR_TYPE::UPDATE
}

int errorRemove(int argc, char* argv[]){
    std::cerr << "COMMAND ERROR " << int(ERROR_TYPE::REMOVE) << ": " << errorString(ERROR_TYPE::REMOVE) << "\n"
                << "Usage: sudo " << argv[0] << " remove commandName\n"
                << "sudo: requires sudo to access /usr/local/include/ and /usr/local/bin/\n"
                << "COMMAND NAME: Name of Command used in terminal such as 'sudo' or 'chmod' 'vim'\n";
    return int(ERROR_TYPE::REMOVE); // ERROR_TYPE::REMOVE
}