// Aluno: Luis Fernando Lamellas
// Matrícula: 190016841

#include "senha_teste.hpp"

void TUSenha::setUp() {
    objeto = new Senha;
    estado = true;
}

void TUSenha::testarCenarioSucesso() { 
    try {
        objeto->setValor(VALOR_VALIDO);
        if (objeto->getValor() != VALOR_VALIDO)
            estado = false;
    }
    catch (invalid_argument &excecao) {
        estado = false;
    }
}

void TUSenha::testarCenarioFalha() { 
    try {
        objeto->setValor(VALOR_INVALIDO);
        estado = false;
    }
    catch (invalid_argument &excecao) {
        if (objeto->getValor() == VALOR_INVALIDO)
            estado = false;
    }
}

void TUSenha::tearDown() {
    delete objeto;
}

void TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    
    if (estado) cout << "SUCESSO - SENHA" << endl;
    else cout << "FALHA - SENHA" << endl;
}