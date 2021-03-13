#include "telefone_teste.hpp"

void TUTelefone::setUp() {
    objeto = new Telefone;
    estado = true;
}

void TUTelefone::testarCenarioSucesso() { //12A45
    try {
        objeto->setValor(VALOR_VALIDO);
        if (objeto->getValor() != VALOR_VALIDO)
            estado = false;
    }
    catch (invalid_argument &excecao) {
        estado = false;
    }
}

void TUTelefone::testarCenarioFalha() { // 00000
    try {
        objeto->setValor(VALOR_INVALIDO);
        estado = false;
    }
    catch (invalid_argument &excecao) {
        if (objeto->getValor() == VALOR_INVALIDO)
            estado = false;
    }
}

void TUTelefone::tearDown() {
    delete objeto;
}

void TUTelefone::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    
    if (estado) cout << "SUCESSO - TELEFONE" << endl;
    else cout << "FALHA - TELEFONE" << endl;
}