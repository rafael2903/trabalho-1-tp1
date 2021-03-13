// Aluno: Luis Fernando Lamellas
// Matrícula: 190016841

#ifndef CODIGO_HPP_
#define CODIGO_HPP_

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

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
