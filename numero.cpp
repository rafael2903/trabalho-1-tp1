#include "numero.hpp"

bool classeNumero::validar(int numero) {
    if (numero < 0 || numero > 20 ) {
        return false;
    }
    return true;
}

void classeNumero::setNumero(int numero) {
    if (validar(numero)) 
        this->numero = numero;
    else 
        throw invalid_argument("Argumento inválido.");
}


