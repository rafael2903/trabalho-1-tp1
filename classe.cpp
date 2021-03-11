#include "classe.h"

void Classe::setValor(int valor) {
    if (validar(valor))
        this->valor = valor;
    else
        throw invalid_argument("Argumento invalido.");
}

bool Classe::validar(int valor) {
    return ( valor == 1 || valor == 2 || valor == 3 );
}
