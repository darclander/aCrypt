#pragma once

#include <iostream>


class Encryptor {

    public:
        Encryptor(std::string pass);
        bool encrypt(std::string &str);

    private:
        std::string password;


};