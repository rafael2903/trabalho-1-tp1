#ifndef ENDERECO_HPP_
#define ENDERECO_HPP_

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

//190142120
class classeEndereco {
    private:
        string endereco;
        bool validar(string);
        
    public:
        void setEndereco(string);
        string getEndereco();
};

inline string classeEndereco::getEndereco() {
    return endereco;
}

#endif // ENDERECO_HPP_
