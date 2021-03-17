#include "endereco.hpp"
//190142120

bool Endereco::validar(string endereco) {

    //verifica se o numero esta fora do intervalo de 5 a 20    
    if (endereco.length() > 20 || endereco.length() < 5) 
        return false;

    //verifica se cada caracter é letra (A-Z ou a-z), dígito (0 – 9), ponto ou espaço.
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

void Endereco::setValor(string endereco) {
    if(validar(endereco)) 
        this->endereco = endereco;
    else 
        throw invalid_argument("Argumento invalido");
}