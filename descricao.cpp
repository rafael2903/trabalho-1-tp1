#include "descricao.hpp"

void Descricao::setValor(string valor) {
    if (validar(valor))
        this->valor = valor;
    else
        throw invalid_argument("Argumento invalido.");
}

bool Descricao::validar(string valor) {
    int length = valor.length();
    int last_character = valor[length - 1];
    
    return (length > 5 && length < 30 && last_character == '.' );
}
