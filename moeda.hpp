// Aluno: Luis Fernando Lamellas
// Matrícula: 190016841

#ifndef MOEDA_HPP_
#define MOEDA_HPP_

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

///
/// Padrão para representação de moeda.
///
/// Regras de formato:
///
/// - Deve ser uma valor númerico entre 0,00 e 1.000.000,00.
/// - com o formato exatamente ao especificado acima.
///

class Moeda {
    private:
        string moeda;
        bool validar(string);
        
    public:

///
/// Armazena moeda informada caso a mesma seja válida.
///
/// Lança exceção caso a moeda informada seja inválida.
///
/// @param string moeda.
///
/// @throw invalid_argument
///

        void setValor(string);

///
/// Retorna moeda.
///
/// @return string moeda.
///

        string getValor();
};

inline string Moeda::getValor() {
    return moeda;
}

#endif // MOEDA_HPP_