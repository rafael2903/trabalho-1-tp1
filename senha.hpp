#ifndef SENHA_HPP_
#define SENHA_HPP_

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

// 190016841
class Senha {
    private:
        string senha;
        bool validar(string);
        
    public:
        void setValor(string);
        string getValor();
};

inline string Senha::getValor() {
    return senha;
}

#endif // SENHA_HPP_