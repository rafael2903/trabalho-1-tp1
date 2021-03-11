#include "codigo_teste.hpp"

void TUCodigo::setUp() {
    codigo = new Codigo;
    estado = true;
}

void TUCodigo::testarCenarioSucesso() { //12A45
    try {
        codigo->setValor(VALOR_VALIDO);
        if (codigo->getValor() != VALOR_VALIDO)
            estado = false;
    }
    catch (invalid_argument &excecao) {
        estado = false;
    }
}

void TUCodigo::testarCenarioFalha() { // 00000
    try {
        codigo->setValor(VALOR_INVALIDO);
        cout << "Valor inválido passou no teste setValor da classe Código" << endl;
        estado = false;
    }
    catch (invalid_argument &excecao) {
        if (codigo->getValor() == VALOR_INVALIDO)
            estado = false;
    }
}

void TUCodigo::tearDown() {
    delete codigo;
}

void TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    
    if (estado) cout << "SUCESSO - CODIGO" << endl;
    else cout << "FALHA - CODIGO" << endl;
}