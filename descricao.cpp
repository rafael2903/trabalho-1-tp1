#include "descricao.h"

void Descricao::setValor(string valor) {
    if (validar(valor))
        this->valor = valor;
    else
        throw invalid_argument("Argumento invalido.");
}

bool Descricao::validar(string valor) {
    return true;
}
