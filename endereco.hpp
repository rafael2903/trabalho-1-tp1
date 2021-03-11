#ifndef ENDERECO_H_
#define ENDERECO_H_
#include <stdexcept>
#include <string>

//190142120

using namespace std;

class classeEndereco {
    private:
        string endereco;
        bool validar(string);
    public:
        void setEndereco(string);
        string getEndereco();
};

inline string classeEndereco::getEndereco() {
    return endereco;
}

#endif // ENDERECO_H_
