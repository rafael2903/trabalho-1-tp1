#include "endereco.hpp"

// size: 5 a 20
// A-Z a-z
// 0-9
// . ou espaco

bool classeEndereco::validar(string endereco) {
    if (endereco.size() > 20 || endereco.size() < 5) 
        return false;

    for (int i = 0; i < endereco.size(); i++) {
        if ((endereco[i] <= 'A' && endereco[i] >= 'Z') 
        || (endereco[i] <= 'a' && endereco[i] >= 'z')
        || (endereco[i] <= '0' && endereco[i] <= '9')
        || (endereco[i] != '.' && endereco[i] != ' ')) {
            return false;
        }
    } 
    return true;
}

void classeEndereco::setEndereco(string endereco) {
    if(validar(endereco)) 
        this->endereco = endereco;
    else 
        throw invalid_argument("Argumento invalido");
}