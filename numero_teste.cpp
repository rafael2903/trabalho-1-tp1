#include "numero_teste.hpp"

void TUNumero::setUp() {
    numero = new Numero;
    estado = true;
}

void TUNumero::testarCenarioSucesso() {
    try {
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO)
            estado = false;
    }
    catch (invalid_argument &excecao) {
        estado = false;
    }
}

void TUNumero::testarCenarioFalha() {
    try {
        numero->setValor(VALOR_INVALIDO);
        estado = false;
    }
    catch (invalid_argument &excecao) {
        if (numero->getValor() == VALOR_INVALIDO)
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
