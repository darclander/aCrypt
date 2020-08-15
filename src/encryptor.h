#pragma once

#include <iostream>


class Encryptor {

    public:
        Encryptor(std::string pass);
        bool encrypt();

    private:
        std::string password;


};