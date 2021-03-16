#ifndef DATA_HPP_
#define DATA_HPP_

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

///
/// Padrão para representação de data.
///
/// Regras de formato:
///
/// - Formato DD-MM-AA
/// - 01 a 31 em DD.
/// - 01 e 12 em MM.
/// - 21 a 99 em AA.
/// - Considera a ocorrência de anos bissextos.
///

// 190134780
class Data {
    private:
        string data;
        bool validar(string);

    public:

///
/// Armazena data informada caso a mesma seja válida.
///
/// Lança exceção caso a data informada seja inválida.
///
/// @param string data.
///
/// @throw invalid_argument
///

        void setValor(string);

///
/// Retorna data.
///
/// @return string data.
///

        string getValor();
};

inline string Data::getValor() {
    return data;
}

#endif // DATA_HPP_