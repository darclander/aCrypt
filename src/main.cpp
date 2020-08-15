#include <iostream>
#include "filehandler.h"
#include "encryptor.h"
#include "decryptor.h"


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

    Encryptor encryptor = Encryptor(password); 

    std::string fileContent;
    fileContent = fhandler.open(pathToFile); // Opens file, see FileHandler.open()
    std::cout << fileContent;
    encryptor.encrypt(fileContent); // Currently prints the content of the file, will later encrypt the fileContent string
    
    return 0;
} 