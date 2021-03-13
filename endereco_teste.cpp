#include "endereco_teste.hpp"

void TUEndereco::setUp() {
    endereco = new Endereco;
    estado = true;
}

void TUEndereco::testarCenarioSucesso() {
    try {
        endereco->setValor(VALOR_VALIDO);
        if (endereco->getValor() != VALOR_VALIDO)
            estado = false;
    }
    catch (invalid_argument &excecao) {
        estado = false;
    }
}

void TUEndereco::testarCenarioFalha() {
    try {
        endereco->setValor(VALOR_INVALIDO);
        estado = false;
    }
    catch (invalid_argument &excecao) {
        if (endereco->getValor() == VALOR_INVALIDO)
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