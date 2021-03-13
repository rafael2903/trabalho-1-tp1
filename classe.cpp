#include "classe.hpp"

bool Classe::validar(int classe) {
    return (classe == 1 || classe == 2 || classe == 3);
}

void Classe::setValor(int classe) {
    if (validar(classe))
        this->classe = classe;
    else
        throw invalid_argument("Argumento invalido.");
}