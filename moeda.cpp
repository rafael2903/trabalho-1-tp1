// Aluno: Luis Fernando Lamellas
// Matrícula: 190016841

#include "moeda.hpp"

bool isDigit(char c) {
    return (c >= '0' && c <= '9');
}

bool validar_substr(string str) {
    for (int i = 0; i < str.size(); i++) {
        if (!isDigit(str[i])) return false;

    }
    return true;
}

bool Moeda::validar(string valor) {

    int n_digit = 0;
    string num_str;
    bool comma = false;

    // verifica formato
    for(int i = 0; i < valor.size(); i++) {

        // contador de digitos
        if(isDigit(valor[i]) && i < 4) {
            n_digit++;
            if (n_digit > 3) return false;
        }

        // valida os 3 indices após o ponto.
        else if (valor[i] == '.') {
            if(comma == true) return false;
            validar_substr(valor.substr(i+1,3));
            i += 3;
        }

        // valida os 2 indices após a vírgula.
        else if(valor[i] == ',') {
            if(comma == true) return false;
            validar_substr(valor.substr(i+1,2));
            i += 2;
            comma = true;
        }

        // invalida o valor caso apareça algum caractere desconhecido
        else return false;

    }

    // verifica valor
    for(int i = 0; i < valor.size(); i++) {
        if(isDigit(valor[i])) num_str.push_back(valor[i]);
    }
    double num = stod(num_str);
    num /= 100;
    if ( num < 0 || num > 1e6) return false;

    return true;
}

void Moeda::setValor(string valor) {
    if (validar(valor)) 
        this->moeda = valor;
    else 
        throw invalid_argument("Argumento inválido.");
}