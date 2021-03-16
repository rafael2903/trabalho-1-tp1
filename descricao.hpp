#ifndef DESCRICAO_HPP_
#define DESCRICAO_HPP_

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

///
/// Padrão para representação de descrição.
///
/// Regras de formato:
///
/// - Descrição é válida caso tenha entre 5 e 30 caracteres e seja terminada por ponto.
///

// 190134780
class Descricao {
    private:
        string descricao;
        bool validar(string);

    public:

///
/// Armazena descrição informada caso a mesma seja válida.
///
/// Lança exceção caso a descrição informada seja inválida.
///
/// @param string descricao.
///
/// @throw invalid_argument
///

        void setValor(string);

///
/// Retorna descrição.
///
/// @return string descricao.
///

        string getValor();
};

inline string Descricao::getValor() {
    return descricao;
}

#endif  // DESCRICAO_HPP_
