#ifndef CODIGO_HPP_
#define CODIGO_HPP_

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

// 190016841
class Codigo {
    private:
        string codigo;
        bool validar(string);
        
    public:
        void setValor(string);
        string getValor();
};

inline string Codigo::getValor() {
    return codigo;
}

#endif // CODIGO_HPP_
