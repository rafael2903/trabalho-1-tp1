#ifndef CLASSE_H_
#define CLASSE_H_

#include <stdexcept>

using namespace std;

// 190134780
class Classe {
    private:
        int valor;
        bool validar(int);

    public:
        void setValor(int);
        int getValor();
};

inline int Classe::getValor() {
    return valor;
}

#endif  // CLASSE_H_
