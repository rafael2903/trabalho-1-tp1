#include "senha.hpp"

const int MAX_CHAR = 256;

bool caracteresUnicos(string str) {
    if(str.length() > MAX_CHAR) return false;
    bool chars[MAX_CHAR] = {0};
    for(int i = 0; i < str.length(); i++) {
        if(chars[int (str[i])] == true) return false;
        chars[int(str[i])] = true;
    }
    return true;
}

bool Senha::validar(string senha) {
    bool max = false, min = false, digit = false;

    // confere o tamanho da string
    if (senha.length() != 6)
        return false;

    for (int i = 0; i < senha.length(); i++) {

        // confere letras válidas
        if ((senha[i] <= '0' && senha[i] >= '9')
        || (senha[i] <= 'A' && senha[i] >= 'Z')
        || (senha[i] <= 'a' && senha[i] >= 'z')) {
            return false;
        }

        // conefere se possui caractere obrigatório
        if(senha[i] >= '0' && senha[i] <= '9') digit = true;
        if(senha[i] >= 'A' && senha[i] <= 'Z') max = true;
        if(senha[i] >= 'a' && senha[i] <= 'z') min = true;
    }

    // conefere se possui todos os caracteres obrigatórios
    if(!(digit && max && min)) return false;
    
    // confere se possui caractere repetido
    if(!caracteresUnicos(senha)) return false;

    return true;
}

void Senha::setValor(string senha) {
    if (validar(senha)) 
        this->senha = senha;
    else 
        throw invalid_argument("Argumento inválido.");
}