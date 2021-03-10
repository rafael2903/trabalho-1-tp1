#ifndef DESCRICAO_H_
#define DESCRICAO_H_

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

#endif  // DESCRICAO_H_
