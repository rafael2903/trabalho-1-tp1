#ifndef TELEFONE_HPP_
#define TELEFONE_HPP_

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

// 190016841
class Telefone {
    private:
        string telefone;
        bool validar(string);
        
    public:
        void setValor(string);
        string getValor();
};

inline string Telefone::getValor() {
    return telefone;
}

#endif // TELEFONE_HPP_