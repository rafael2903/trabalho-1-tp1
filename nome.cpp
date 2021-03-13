#include "nome.hpp"

bool Nome::validar(string nome) {

    char aux;

    if (nome.length() > 25 || nome.length() < 5) 
        return false;

    for (int i = 0; i < nome.length(); i++) {

        if (!isLetra(nome[i]) && nome[i] != '.' && nome[i] != ' ') {
            return false;
        }

        if (i == 0) {
            if (isLetra(nome[i]) && !isUpperCase(nome[i]))
                return false;
            if (nome[i] == '.')
                return false;
        } else {
            if (nome[i] == '.' && !isLetra(aux)) 
                return false;
            if (nome[i] == ' ' && aux == ' ')
                return false;
            if (!isUpperCase(nome[i]) && aux == ' ')
                return false;
        }

        aux = nome[i];
    }
    return true;
}

bool Nome::isLetra(char character) {
    if ((character < 'A' || character > 'Z') 
    && (character < 'a' || character > 'z')) {
        return false;
    }
    return true;
}

bool Nome::isUpperCase(char character) {
    if (character >= 'A' && character <= 'Z')
        return true;
    return false;
}

void Nome::setValor(string nome) {
    if (validar(nome))
        this->nome = nome;
    else
        throw invalid_argument("Argumento invalido.");
}