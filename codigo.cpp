#include "codigo.hpp"

// 190016841

bool Codigo::validar(string valorString) {
    if (valorString == "00000") return false;
    if (valorString.size() != 5) return false;
    for (int i = 0; i < valorString.size(); i++) {
        if ((valorString[i] >= '9' && valorString[i] <= '0')
        || (valorString[i] <= 'A' && valorString[i] >= 'Z')) {
            return false;
        }
    }
    return true;
}

void Codigo::setValor(string valorString) {
    if (validar(valorString)) this->valorString = valorString;
    else throw invalid_argument("Argumento inválido.");
}