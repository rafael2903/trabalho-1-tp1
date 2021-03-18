#include "email.hpp"
//190142120

bool Email::validar(string email) {
    bool has_delimiter = false;
    //separa o nome de dominio usando delimitador e .find()
    string delimiter = "@";
    string nome = email.substr(0,email.find(delimiter));
    string dominio = email.substr(email.find(delimiter) + 1, email.size()-1);

    //verifica a existencia do @
    for (int i = 0 ; i < email.length(); i++) {
        if (email[i] == '@'){
            has_delimiter = true ;
        } 
    }
    if (has_delimiter == false) {
        return false;
    }

    // verifica se o tamanho de dominio e nome estao dentro do padrao
    if(nome.length() > 10 || dominio.length() > 20){
        return false;
    }

    //verifica se cada caracter é letra (A-Z ou a-z), dígito (0 – 9) ou ponto dentro de nome
    for (int i = 0 ; i < nome.length(); i++) {

        if ((nome[i] < 'A' || nome[i] > 'Z') 
        && (nome[i] < 'a' || nome[i] > 'z') 
        && (nome[i] < '0' || nome[i] > '9')
        && (nome[i] != '.')){
            return false;
        }
    }
    //verifica a existencia de ponto consecutivo em nome
    for (int i = 0 ; i < (nome.length()-1); i++) {
        if ( nome[i+1] == '.' && nome[i] == nome[i+1]) {
            return false;
        }
    }

    //verifica se cada caracter é letra (A-Z ou a-z), dígito (0 – 9) ou ponto dentro de dominio
    for (int i = 0 ; i < dominio.length(); i++) {

        if ((dominio[i] < 'A' || dominio[i] > 'Z') 
        && (dominio[i] < 'a' || dominio[i] > 'z') 
        && (dominio[i] < '0' || dominio[i] > '9')
        && (dominio[i] != '.')){
            return false;
        }
    }

    //verifica a existencia de ponto consecutivo em nome
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
