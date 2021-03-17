#ifndef NUMERO_HPP_
#define NUMERO_HPP_

#include <stdexcept>
#include <iostream>

using namespace std;

///
/// Padrão para representação de nome.
///
/// Regras de formato:
///
/// - Número é valido de 0 a 20
///

//190142120
class Numero {
    private:
        int numero;
        bool validar(int);
        
    public:

///
/// Armazena numero informada caso a mesma seja válida.
///
/// Lança exceção caso a numero informada seja inválida.
///
/// @param int numero.
///
/// @throw invalid_argument
///

        void setValor(int);

///
/// Retorna numero.
///
/// @return int Numero.
///

        int getValor();
};

inline int Numero::getValor() {
    return numero;
}

#endif  // NUMERO_HPP_