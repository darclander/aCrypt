#include <iostream>
#include "filehandler.h"


int main(int argc, char *argv[]) {


    if (argc < 3) {
        std::cerr << "Please provide, encrypt / decrypt and filepath\n";
        std::cerr << "Example: crypt.exe encrypt textfile.txt\n";
        return -1;
    }


    FileHandler fhandler = FileHandler();

    std::string cryptType = argv[1];
    std::string pathToFile = argv[2];
    std::string password;

    std::cout << "Please enter password: ";
    std::cin >> password;

    std::string fileContent;
    fileContent = fhandler.open(pathToFile);
    std::cout << fileContent;
    

} 