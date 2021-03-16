#ifndef NOME_HPP_
#define NOME_HPP_

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

///
/// Padrão para representação de nome.
///
/// Regras de formato:
///
/// - Nome é válido caso tenha entre 5 e 25 caracteres.
/// - Cada caracter é letra (A-Z ou a-z), ponto ou espaço.
/// - Ponto é precedido por letra.
/// - Não há espaços em sequência.
/// - Primeira letra de cada termo é letra maiúscula
///

// 190134780
class Nome {
    private:
        string nome;
        bool validar(string);
        bool isLetra(char);
        bool isUpperCase(char);

    public:
    
///
/// Armazena nome informado caso o mesmo seja válido.
///
/// Lança exceção caso o nome informado seja inválido.
///
/// @param valor Nome.
///
/// @throw invalid_argument
///

        void setValor(string);

///
/// Retorna nome.
///
/// @return Nome.
///

        string getValor();
};

inline string Nome::getValor() {
    return nome;
}

#endif // NOME_HPP_