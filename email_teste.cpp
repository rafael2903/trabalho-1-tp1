#include "email_teste.hpp"

//190142120

const string TUEmail::VALOR_VALIDO = "ana@ola.com";
const string TUEmail::VALOR_INVALIDO = "ana.a";

void TUEmail::setUp() {
    email = new Email;
    estado = true;
}

void TUEmail::testarCenarioSucesso() {
    try {
        email->setValor(VALOR_VALIDO);
        if (email->getValor() != VALOR_VALIDO)
            estado = false;
    }
    catch (invalid_argument &excecao) {
        estado = false;
    }
}

void TUEmail::testarCenarioFalha() {
    try {
        email->setValor(VALOR_INVALIDO);
        estado = false;
    }
    catch (invalid_argument &excecao) {
        if (email->getValor() == VALOR_INVALIDO)
            estado = false;
    }
}

void TUEmail::tearDown() {
    delete email;
}

void TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    
    if (estado) cout << "SUCESSO - EMAIL" << endl;
    else cout << "FALHA - EMAIL" << endl;
}