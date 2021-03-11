#include <iostream>

#include "testes.h"

using namespace std;

int main() {

    TUClasse testeClasse;

    if (testeClasse.run()) {
        cout << "SUCESSO - CLASSE" << endl;
    } else {
        cout << "FALHA - CLASSE" << endl;
    }

    TUDescricao testeDescricao;

    if (testeDescricao.run()) {
        cout << "SUCESSO - DESCRICAO" << endl;
    } else {
        cout << "FALHA - DESCRICAO" << endl;
    }


    return 0;
}
