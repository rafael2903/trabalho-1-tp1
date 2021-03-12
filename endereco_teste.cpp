#include "endereco_teste.hpp"

//190142120

void TUEndereco::setUp() {
    endereco = new classeEndereco;
    estado = true;
}

void TUEndereco::testarCenarioSucesso() {
    try {
        endereco->setEndereco(VALOR_VALIDO);
        if (endereco->getEndereco() != VALOR_VALIDO)
            estado = false;
    }
    catch (invalid_argument &excecao) {
        estado = false;
    }
}

void TUEndereco::testarCenarioFalha() {
    try {
        endereco->setEndereco(VALOR_INVALIDO);
        estado = false;
    }
    catch (invalid_argument &excecao) {
        if (endereco->getEndereco() == VALOR_INVALIDO)
            estado = false;
    }
}

void TUEndereco::tearDown() {
    delete endereco;
}

void TUEndereco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    if (estado) cout << "SUCESSO - ENDERECO" << endl;
    else cout << "FALHA - ENDERECO" << endl;
}