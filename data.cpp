#include "data.hpp"

int months[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

bool Data::validar(string data) {

    // verifica tamanho
    if (data.size() != 8) return false;

    // verifica separadores
    if(data[2] != '-' || data[5] != '-') return false;

    // verifica digitos
    for(int i = 0; i < data.size(); i++) {
        if (i == 2 || i == 5) continue;
        if (data[i] < '0' || data[i] > '9') return false;
    }

    // separa substrings
    string day = data.substr(0, 2);
    string month = data.substr(3, 2);
    string year = data.substr(6, 2);

    // converte para int
    int n_day = stoi(day);
    int n_month = stoi(month);
    int n_year = stoi(year);

    // valida mês
    if (n_month < 1 || n_month > 12) return false;

    // valida dia
    if (n_day < 1 || n_day > months[n_month - 1]) return false;

    // valida ano
    if (n_year < 21 || n_year > 99) return false;

    return true;

}

void Data::setValor(string data) {
    if (validar(data))
        this->data = data;
    else
        throw invalid_argument("Argumento invalido.");
}
