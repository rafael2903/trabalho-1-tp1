#include "nome.hpp"

void Nome::setValor(string nome) {
    if (validar(nome))
        this->nome = nome;
    else
        throw invalid_argument("Argumento invalido.");
}

bool Nome::validar(string nome) {
    return true;
}
