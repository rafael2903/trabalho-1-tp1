// Aluno: Luis Fernando Lamellas
// Matrícula: 190016841

#include "codigo_teste.hpp"

void TUCodigo::setUp() {
    objeto = new Codigo;
    estado = true;
}

void TUCodigo::testarCenarioSucesso() { 
    try {
        objeto->setValor(VALOR_VALIDO);
        if (objeto->getValor() != VALOR_VALIDO)
            estado = false;
    }
    catch (invalid_argument &excecao) {
        estado = false;
    }
}

void TUCodigo::testarCenarioFalha() { 
    try {
        objeto->setValor(VALOR_INVALIDO);
        estado = false;
    }
    catch (invalid_argument &excecao) {
        if (objeto->getValor() == VALOR_INVALIDO)
            estado = false;
    }
}

void TUCodigo::tearDown() {
    delete objeto;
}

void TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    
    if (estado) cout << "SUCESSO - CODIGO" << endl;
    else cout << "FALHA - CODIGO" << endl;
}