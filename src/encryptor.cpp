#include "encryptor.h"

Encryptor::Encryptor(std::string pass) {
    password = pass;
}

bool Encryptor::encrypt(std::string &str) {

    str = "asdasda";
    std::cout << str;
    str.replace(1, 2, "xx");

    
    return false;

}