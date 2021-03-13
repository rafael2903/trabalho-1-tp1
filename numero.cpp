#include "numero.hpp"

bool Numero::validar(int numero) {
    if (numero < 0 || numero > 20 ) {
        return false;
    }
    return true;
}

void Numero::setValor(int numero) {
    if (validar(numero)) 
        this->numero = numero;
    else 
        throw invalid_argument("Argumento inválido.");
}


