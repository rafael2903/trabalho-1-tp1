// Aluno: Luis Fernando Lamellas
// Matrícula: 190016841

#include "moeda.hpp"

bool Moeda::validar(double valor) {

    // verifica valor entre 0 e 1.000.000
    if (valor >= 0 && valor <= 1e6) return true;
    return false;
}

void Moeda::setValor(double valor) {
    if (validar(valor)) 
        this->moeda = valor;
    else 
        throw invalid_argument("Argumento inválido.");
}