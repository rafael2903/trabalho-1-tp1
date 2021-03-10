#include <iostream>

#include "testes.h"

using namespace std;

int main() {

    TUClasse testeClasse;

    if(testeClasse.run()) {
        cout << "SUCESSO - CLASSE" << endl;
    } else {
        cout << "FALHA - CLASSE" << endl;
    }

    return 0;
}
