// Aluno: Luis Fernando Lamellas
// Matrícula: 190016841

#ifndef MOEDA_HPP_
#define MOEDA_HPP_

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

class Moeda {
    private:
        double moeda;
        bool validar(double);
        
    public:
        void setValor(double);
        double getValor();
};

inline double Moeda::getValor() {
    return moeda;
}

#endif // MOEDA_HPP_