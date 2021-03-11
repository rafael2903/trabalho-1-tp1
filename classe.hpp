#ifndef CLASSE_HPP_
#define CLASSE_HPP_

#include <stdexcept>
#include <iostream>

using namespace std;

// 190134780
class Classe {
    private:
        int classe;
        bool validar(int);

    public:
        void setValor(int);
        int getValor();
};

inline int Classe::getValor() {
    return classe;
}

#endif  // CLASSE_HPP_
