#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::fstream writeFile;
    writeFile.open("newFile.txt", std::ios::out);
    std::cout << writeFile.is_open() << std::endl;
    if (writeFile.is_open()) {
        writeFile << "Hello World." << std::endl;
    }
    writeFile.close();
    return 0;
}