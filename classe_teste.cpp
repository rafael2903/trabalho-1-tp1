#include "classe_teste.hpp"

void TUClasse::setUp() {
    classe = new Classe;
    estado = true;
}

void TUClasse::testarCenarioSucesso() {
    try {
        classe->setValor(VALOR_VALIDO);
        if (classe->getValor() != VALOR_VALIDO)
            estado = false;
    }
    catch (invalid_argument &excecao) {
        estado = false;
    }
}

void TUClasse::testarCenarioFalha() {
    try {
        classe->setValor(VALOR_INVALIDO);
        estado = false;
    }
    catch (invalid_argument &excecao) {
        if (classe->getValor() == VALOR_INVALIDO)
            estado = false;
    }
}

void TUClasse::tearDown() {
    delete classe;
}

bool TUClasse::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
