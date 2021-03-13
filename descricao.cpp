#include "descricao.hpp"

bool Descricao::validar(string descricao) {
    int length = descricao.length();
    int last_character = descricao[length - 1];
    
    return (length > 5 && length < 30 && last_character == '.' );
}

void Descricao::setValor(string descricao) {
    if (validar(descricao))
        this->descricao = descricao;
    else
        throw invalid_argument("Argumento invalido.");
}
