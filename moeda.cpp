#include "moeda.hpp"

bool Moeda::validar(double valor) {
    if(valor >= 0 && valor <= 1e6) return true;
}

void Moeda::setValor(double valor) {
    if (validar(valor)) 
        this->moeda = valor;
    else 
        throw invalid_argument("Argumento inválido.");
}