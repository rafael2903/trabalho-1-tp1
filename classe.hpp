#ifndef CLASSE_HPP_
#define CLASSE_HPP_

#include <stdexcept>
#include <iostream>

using namespace std;

///
/// Padrão para representação de classe.
///
/// Regras de formato:
///
/// - Classe é válida caso seja igual a 1, 2 ou 3.
///

// 190134780
class Classe {
    private:
        int classe;
        bool validar(int);

    public:

///
/// Armazena classe informada caso a mesma seja válida.
///
/// Lança exceção caso a classe informada seja inválida.
///
/// @param int classe.
///
/// @throw invalid_argument
///

        void setValor(int);

///
/// Retorna classe.
///
/// @return int classe.
///

        int getValor();
};

inline int Classe::getValor() {
    return classe;
}

#endif  // CLASSE_HPP_


// &atilde; &ccedil; &oacute; &aacute;