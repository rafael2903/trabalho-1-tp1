#ifndef NUMERO_HPP_
#define NUMERO_HPP_

#include <stdexcept>
#include <iostream>

using namespace std;

//190142120
class classeNumero {
    private:
        int numero;
        bool validar(int);
        
    public:
        void setNumero(int);
        int getNumero();
};

inline int classeNumero::getNumero() {
    return numero;
}

#endif  // NUMERO_HPP_