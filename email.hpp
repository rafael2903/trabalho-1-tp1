#ifndef EMAIL_HPP_
#define EMAIL_HPP_

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

///
/// Padrão para representação de classe.
///
/// Regras de formato:
///
/// - Classe é válida caso o formato seja "nome@dominio". 
/// - Nome composto por até 10 caracteres. 
/// - Dominio composto por até 20 caracteres. 
/// - Cada caracter seja letra (A-Z ou a-z), dígito (0 – 9) ou ponto.
/// - Não existir pontos em sequência. 
///

//190142120

class Email {
    private:
        string email;
        bool validar(string);
        
    public:

///
/// Armazena email informado caso o mesmo seja válido.
///
/// Lança exceção caso o email informado seja inválido.
///
/// @param string Email.
///
/// @throw invalid_argument
///   

        void setValor(string);

///
/// Retorna email.
///
/// @return Email.
///

        string getValor();
};

inline string Email::getValor() {
    return email;
}

#endif  // EMAIL_HPP_