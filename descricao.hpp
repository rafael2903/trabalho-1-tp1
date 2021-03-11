#ifndef DESCRICAO_HPP_
#define DESCRICAO_HPP_

#include <stdexcept>
#include <string>

using namespace std;

// 190134780
class Descricao {
    private:
        string valor;
        bool validar(string);

    public:
        void setValor(string);
        string getValor();
};

inline string Descricao::getValor() {
    return valor;
}

#endif  // DESCRICAO_HPP_
