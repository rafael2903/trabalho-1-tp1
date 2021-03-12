#include "numero_teste.hpp"

//190142120

void TUNumero::setUp() {
    numero = new classeNumero;
    estado = true;
}

void TUNumero::testarCenarioSucesso() {
    try {
        numero->setNumero(VALOR_VALIDO);
        if (numero->getNumero() != VALOR_VALIDO)
            estado = false;
    }
    catch (invalid_argument &excecao) {
        estado = false;
    }
}

void TUNumero::testarCenarioFalha() {
    try {
        numero->setNumero(VALOR_INVALIDO);
        estado = false;
    }
    catch (invalid_argument &excecao) {
        if (numero->getNumero() == VALOR_INVALIDO)
            estado = false;
    }
}

void TUNumero::tearDown() {
    delete numero;
}

void TUNumero::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    if (estado) cout << "SUCESSO - NUMERO" << endl;
    else cout << "FALHA - NUMERO" << endl;
}
