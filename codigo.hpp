// Aluno: Luis Fernando Lamellas
// Matrícula: 190016841

#ifndef CODIGO_HPP_
#define CODIGO_HPP_

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

///
/// Padrão para representação de código.
///
/// Regras de formato:
///
/// - Deve obedecer o padrão XXXXX.
/// - Cada caracter X é digito de 0 a 9.
/// - Código 00000 é inválido.
///

class Codigo {
    private:
        string codigo;
        bool validar(string);
        
    public:

///
/// Armazena código informada caso a mesma seja válida.
///
/// Lança exceção caso a código informada seja inválida.
///
/// @param string código.
///
/// @throw invalid_argument
///

        void setValor(string);

///
/// Retorna descrição.
///
/// @return string código.
///

        string getValor();
};

inline string Codigo::getValor() {
    return codigo;
}

#endif // CODIGO_HPP_
