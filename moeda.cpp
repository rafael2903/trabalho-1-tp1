#include "moeda.hpp"

bool Moeda::validar(double valor) {
<<<<<<< HEAD
    if(valor >= 0 && valor <= 1e6) return true;
=======
    if (valor >= 0 && valor <= 1e6) 
        return true;
>>>>>>> 182ed3170c9c3d903436f7f72a8624a35da57a93
    return false;
}

void Moeda::setValor(double valor) {
    if (validar(valor)) 
        this->moeda = valor;
    else 
        throw invalid_argument("Argumento inválido.");
}