/*  commands header file */
#ifndef COMMANDS_H
#define COMMANDS_H

#include <cstdlib>
#include <string>
#include <iostream>
#include <filesystem>

// ERROR TYPE enum class
enum class ERROR_TYPE{
    NONE = 0,
    USAGE = 10,
    ACTION = 11,
    CREATE = 20,
    UPDATE = 21,
    REMOVE = 22
};
std::string errorString(ERROR_TYPE errorType);

// action
void help();
void createCommand(std::string filePath, std::string commName);
void updateCommand(std::string filePath, std::string commName);
void removeCommand(std::string commName);

// error
int errorUsage(int argc, char* argv[]);
int errorAction(int argc, char* argv[]);
int errorCreate(int argc, char* argv[]);
int errorUpdate(int argc, char* argv[]);
int errorRemove(int argc, char* argv[]);

#endif