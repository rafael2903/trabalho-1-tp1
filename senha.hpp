// Aluno: Luis Fernando Lamellas
// Matrícula: 190016841

#ifndef SENHA_HPP_
#define SENHA_HPP_

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

///
/// Padrão para representação de senha.
///
/// Regras de formato:
///
/// - Deve possuir 6 caracteres.
/// - Cada caracter dever ser uma letra (A-Z ou a-z) ou dígito (0 a 9).
/// - Não deve haver caractere repetido.
/// - Deve existir pelo menos uma letra minuscula, uma letra maiúscula e um digito.
///

class Senha {
    private:
        string senha;
        bool validar(string);
        
    public:

///
/// Armazena senha informada caso a mesma seja válida.
///
/// Lança exceção caso a senha informada seja inválida.
///
/// @param string senha.
///
/// @throw invalid_argument
///

        void setValor(string);

///
/// Retorna senha.
///
/// @return string senha.
///

        string getValor();
};

inline string Senha::getValor() {
    return senha;
}

#endif // SENHA_HPP_