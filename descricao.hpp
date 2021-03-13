#ifndef DESCRICAO_HPP_
#define DESCRICAO_HPP_

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

// 190134780
class Descricao {
    private:
        string descricao;
        bool validar(string);

    public:
        void setValor(string);
        string getValor();
};

inline string Descricao::getValor() {
    return descricao;
}

#endif  // DESCRICAO_HPP_
