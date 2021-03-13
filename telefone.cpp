// Aluno: Luis Fernando Lamellas
// Matrícula: 190016841

#include "telefone.hpp"

bool Telefone::validar(string str) {

    // verifica tamanho
    if(str.length() != 15) return false;

    // verifica formato
    if (str[0] != '(' || str[4] != ')' || str[5] != '-' ) return false;

    // verifica digitos
    for(int i = 0; i < str.length(); i++) {
        if (i == 0 || i == 4 || i == 5) continue;
        if(str[i] < '0' || str[i] > '9') return false;
    }

    return true;
}

void Telefone::setValor(string str) {
    if (validar(str)) 
        this->telefone = str;
    else 
        throw invalid_argument("Argumento inválido.");
}