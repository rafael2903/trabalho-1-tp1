#include "moeda_teste.hpp"

void TUMoeda::setUp() {
    objeto = new Moeda;
    estado = true;
}

void TUMoeda::testarCenarioSucesso() {
    try {
        objeto->setValor(VALOR_VALIDO);
        if (objeto->getValor() != VALOR_VALIDO)
            estado = false;
    }
    catch (invalid_argument &excecao) {
        estado = false;
    }
}

void TUMoeda::testarCenarioFalha() {
    try {
        objeto->setValor(VALOR_INVALIDO);
        estado = false;
    }
    catch (invalid_argument &excecao) {
        if (objeto->getValor() == VALOR_INVALIDO)
            estado = false;
    }
}

void TUMoeda::tearDown() {
    delete objeto;
}

void TUMoeda::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    
    if (estado) cout << "SUCESSO - MOEDA" << endl;
    else cout << "FALHA - MOEDA" << endl;
}