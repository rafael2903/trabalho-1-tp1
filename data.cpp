#include "data.hpp"

bool Data::validar(string data) {
   return true;
}

void Data::setValor(string data) {
    if (validar(data))
        this->data = data;
    else
        throw invalid_argument("Argumento invalido.");
}
