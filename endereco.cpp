#include "endereco.hpp"

// size: 5 a 20
// A-Z a-z
// 0-9
// . ou espaco

bool classeEndereco::validar(string endereco) {

    if (endereco.size() > 20 || endereco.size() < 5) return false;
    for(int contador=0; contador < endereco.size(); contador++ ) {
            if((endereco[contador] <= 'A' && endereco[contador] >= 'Z') 
            || (endereco[contador] <= 'a' && endereco[contador] >= 'z')
            || (endereco[contador] <= '0' && endereco[contador] <= '9')
            || (endereco[contador] != '.' && endereco[contador] != ' ')) {
                return false;
            }
    } return true;

}

void classeEndereco::setEndereco(string endereco) {

    if(validar(endereco)) this->endereco = endereco;
    else throw invalid_argument("Argumento invalido");
}