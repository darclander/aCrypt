#include "filehandler.h"

FileHandler::FileHandler() {
    std::cout << "Created filehandler\n";
}

std::string FileHandler::open(std::string path) {
    std::ifstream inFile;
    inFile.open(path.c_str());

    if (inFile.is_open()) {
        std::stringstream strStream;
        strStream << inFile.rdbuf();
        std::string str = strStream.str();
        inFile.close();
        return str;
    } 
    std::cerr << "Error opening file, please check filepath.";
    return NULL;
}