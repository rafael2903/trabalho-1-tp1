// Aluno: Luis Fernando Lamellas
// Matrícula: 190016841

#ifndef TELEFONE_HPP_
#define TELEFONE_HPP_

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

///
/// Padrão para representação de telefone.
///
/// Regras de formato:
///
/// - Deve obedecer o padrão (XXX)-XXXXXXXXX.
/// - Cada caracter X é digito de 0 a 9.
/// - Telefone (000)-000000000 é inválido.
///

class Telefone {
    private:
        string telefone;
        bool validar(string);
        
    public:

///
/// Armazena telefone informada caso a mesma seja válida.
///
/// Lança exceção caso a telefone informada seja inválida.
///
/// @param string telefone.
///
/// @throw invalid_argument
///

        void setValor(string);

///
/// Retorna descrição.
///
/// @return string telefone.
///

        string getValor();
};

inline string Telefone::getValor() {
    return telefone;
}

#endif // TELEFONE_HPP_