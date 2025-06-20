#!/bin/bash
g++ -o 'bin/main.o' -c 'main.cpp'
g++ -o 'bin/error.o' -c 'source/error.cpp'
g++ -o 'bin/help.o' -c 'source/help.cpp'
g++ -o 'bin/createcommand.o' -c 'source/createCommand.cpp'
g++ -o 'bin/updatecommand.o' -c 'source/updateCommand.cpp'
g++ -o 'bin/removecommand.o' -c 'source/removeCommand.cpp'
g++ -o 'command' 'bin/main.o' 'bin/error.o' 'bin/help.o' 'bin/createcommand.o' 'bin/updatecommand.o' 'bin/removecommand.o'
