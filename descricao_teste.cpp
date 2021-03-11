#include "descricao_teste.hpp"

const string TUDescricao::VALOR_INVALIDO = "oi";
const string TUDescricao::VALOR_VALIDO = "rafael.";

void TUDescricao::setUp() {
    descricao = new Descricao;
    estado = true;
}

void TUDescricao::testarCenarioSucesso() {
    try {
        descricao->setValor(VALOR_VALIDO);
        if (descricao->getValor() != VALOR_VALIDO)
            estado = false;
    }
    catch (invalid_argument &excecao) {
        estado = false;
    }
}

void TUDescricao::testarCenarioFalha() {
    try {
        descricao->setValor(VALOR_INVALIDO);
        estado = false;
    }
    catch (invalid_argument &excecao) {
        if (descricao->getValor() == VALOR_INVALIDO)
            estado = false;
    }
}

void TUDescricao::tearDown() {
    delete descricao;
}

bool TUDescricao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
