#include "email.hpp"
//190142120

bool Email::validar(string email) {
    //separa o nome de dominio 
    string delimiter = "@";
    string nome = email.substr(0,email.find(delimiter));
    string dominio = email.substr(email.find(delimiter) + 1, email.size()-1);
    if(nome.length() > 10 || dominio.length() > 20){
        return false;
    }
    for (int i = 0 ; i < nome.length(); i++) {

        if ((nome[i] < 'A' || nome[i] > 'Z') 
        && (nome[i] < 'a' || nome[i] > 'z') 
        && (nome[i] < '0' || nome[i] > '9')
        && (nome[i] != '.')){
            return false;
        }
    }
    for (int i = 0 ; i < (nome.length()-1); i++) {
        if ( nome[i+1] == '.' && nome[i] == nome[i+1]) {
            return false;
        }
    }
    for (int i = 0 ; i < (dominio.length()-1); i++) {
        if ( dominio[i+1] == '.' && dominio[i] == dominio[i+1]) {
            return false;
        }
    }
    return true;
}

void Email::setValor(string email) {
    if (validar(email)) 
        this->email = email;
    else 
        throw invalid_argument("Argumento inválido.");
}
