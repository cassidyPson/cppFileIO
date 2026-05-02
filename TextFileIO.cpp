#include <fstream>
#include <iostream>
#include <string>

int main() {
    // initialize a file to write
    std::fstream writeFile;
    // open the file if it exists, if not create a new one, then select write mode
    writeFile.open("newFile.txt", std::ios::out);
    // if the file is open write a line
    if (writeFile.is_open()) {
        writeFile << "Hello" << std::endl;
    }
    // close the file
    writeFile.close();

    // open the file again and append to it
    writeFile.open("newFile.txt", std::ios::app);
    if (writeFile.is_open()) {
        writeFile << "World." << std::endl;
    }
    writeFile.close();

    return 0;
}