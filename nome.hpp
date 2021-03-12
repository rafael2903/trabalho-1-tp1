#ifndef NOME_HPP_
#define NOME_HPP_

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

// 190134780
class Nome {
    private:
        string nome;
        bool validar(string);

    public:
        void setValor(string);
        string getValor();
};

inline string Nome::getValor() {
    return nome;
}

#endif // NOME_HPP_