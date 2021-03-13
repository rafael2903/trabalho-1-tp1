#ifndef NUMERO_HPP_
#define NUMERO_HPP_

#include <stdexcept>
#include <iostream>

using namespace std;

//190142120
class Numero {
    private:
        int numero;
        bool validar(int);
        
    public:
        void setValor(int);
        int getValor();
};

inline int Numero::getValor() {
    return numero;
}

#endif  // NUMERO_HPP_