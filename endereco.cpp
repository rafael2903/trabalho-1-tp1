#include "endereco.hpp"
//190142120

bool classeEndereco::validar(string endereco) {

    if (endereco.length() > 20 || endereco.length() < 5) 
        return false;

    for (int i = 0; i < endereco.length(); i++) {
        if ((endereco[i] < 'A' || endereco[i] > 'Z') 
        && (endereco[i] < 'a' || endereco[i] > 'z')
        && (endereco[i] < '0' || endereco[i] > '9')
        && (endereco[i] != '.' && endereco[i] != ' ')) {
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