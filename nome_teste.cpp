#include "nome_teste.hpp"

const string TUNome::VALOR_INVALIDO = ".. a1";
const string TUNome::VALOR_VALIDO = " R.a.F.a.E.l Rodrigues ";

void TUNome::setUp() {
    nome = new Nome;
    estado = true;
}

void TUNome::testarCenarioSucesso() {
    try {
        nome->setValor(VALOR_VALIDO);
        if (nome->getValor() != VALOR_VALIDO)
            estado = false;
    }
    catch (invalid_argument &excecao) {
        estado = false;
    }
}

void TUNome::testarCenarioFalha() {
    try {
        nome->setValor(VALOR_INVALIDO);
        estado = false;
    }
    catch (invalid_argument &excecao) {
        if (nome->getValor() == VALOR_INVALIDO)
            estado = false;
    }
}

void TUNome::tearDown() {
    delete nome;
}

void TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    if (estado) cout << "SUCESSO - NOME" << endl;
    else cout << "FALHA - NOME" << endl;
}
