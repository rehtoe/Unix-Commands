# Command Creator

## Purpose
Creates system-wide Unix commands by linking user files or executables to /usr/local/bin. Helps makes custom scripts globally or CLI implementations.

## Core Logic
1. Takes action Argument: (create/update/remove), command name, and file path
2. Validates inputs and permissions
3. Manages links in system directories
4. Returns appropriate error codes

## Requirements
- g++ compiler
- sudo privileges (for system directory access)
- Absolute file paths

## Project
### Building
    ```
    sh compile_project.sh
    ```

### Installation
    ```
    sh install_CLI.sh
    ```

## Usage Syntax
- In Terminal Window
    ```
    sudo command [action] [name] [path]
    ```
## Actions
- create: Makes new command and links it
- update: Changes existing command target
- remove: Deletes command symlink
- -h: Shows help

## Exit Codes
0 - Success  
10 - Usage error  
11 - Invalid action  
20 - Create failed  
21 - Update failed  
22 - Remove failed
