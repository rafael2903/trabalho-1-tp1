// Aluno: Luis Fernando Lamellas
// Matrícula: 190016841

#include "codigo.hpp"

bool Codigo::validar(string codigo) {

    // verifica sequência inválida específica
    if (codigo == "00000") 
        return false;

    // verifica tamanho
    if (codigo.length() != 5) 
        return false;

    // verifica caracteres válidos
    for (int i = 0; i < codigo.length(); i++) {
        if ((codigo[i] >= '9' && codigo[i] <= '0')
        || (codigo[i] <= 'A' && codigo[i] >= 'Z')) {
            return false;
        }
    }
    return true;
}

void Codigo::setValor(string codigo) {
    if (validar(codigo)) 
        this->codigo = codigo;
    else 
        throw invalid_argument("Argumento inválido.");
}