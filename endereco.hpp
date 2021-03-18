#ifndef ENDERECO_HPP_
#define ENDERECO_HPP_

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

///
/// Padrão para representação de data.
///
/// Regras de formato:
///
/// - Endereço é válido se tiver de 5 a 20 caracteres.
/// - Cada caracter seja letra (A-Z ou a-z), dígito (0 – 9), ponto ou espaço.
///

//190142120
class Endereco {
    private:
        string endereco;
        bool validar(string);

    public:

///
/// Armazena endereço informada caso a mesma seja válida.
///
/// Lança exceção caso a endereço informada seja inválida.
///
/// @param string endereço.
///
/// @throw invalid_argument
///

        void setValor(string);
///
/// Retorna endereco.
///
/// @return string endereco.
///       

        string getValor();
};

inline string Endereco::getValor() {
    return endereco;
}

#endif // ENDERECO_HPP_
