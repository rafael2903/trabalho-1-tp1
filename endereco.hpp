#ifndef ENDERECO_HPP_
#define ENDERECO_HPP_

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

//190142120
class Endereco {
    private:
        string endereco;
        bool validar(string);
        
    public:
        void setValor(string);
        string getValor();
};

inline string Endereco::getValor() {
    return endereco;
}

#endif // ENDERECO_HPP_
