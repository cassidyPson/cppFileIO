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

    // other syntax: use ofstream to open file for writing and include file name as parameterd
    std::ofstream writeFile2("newFile.txt");
    if (writeFile2.is_open()) {
        writeFile2 << "See you next time." << std::endl;
    }
    writeFile2.close();

    // read a file, spaces will be counted as the end of a line, fstream does not prevent writing to the file
    std::fstream readFile("newFile.txt", std::ios::in);
    if (readFile.is_open()) {
        std::string line;
        while (readFile >> line) {
            std::cout << line << std::endl;
        }
    }
    readFile.close();

    std::ifstream readFile2("newFile.txt");
    if (readFile2.is_open()) {
        std::string line;
        // to get the entire line use std::getline()
        // why is the "l" not capitalized? The world may never know.
        while (std::getline(readFile2, line)) {
            std::cout << line << std::endl;
        }
    }

    return 0;
}