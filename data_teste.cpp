#include "data_teste.hpp"

const string TUData::VALOR_INVALIDO = "1-13-20";
const string TUData::VALOR_VALIDO = "01-03-22";

void TUData::setUp() {
    data = new Data;
    estado = true;
}

void TUData::testarCenarioSucesso() {
    try {
        data->setValor(VALOR_VALIDO);
        if (data->getValor() != VALOR_VALIDO){
            estado = false; cout << "falhou testarCenarioSucesso try" << endl ;
        }
    }
    catch (invalid_argument &excecao) {
        estado = false;
        cout << "falhou testarCenarioSucesso catch" << endl;
    }
}

void TUData::testarCenarioFalha() {
    try {
        data->setValor(VALOR_INVALIDO);
        estado = false;
        cout << "falhou testarCenarioFalha try" << endl;
    }
    catch (invalid_argument &excecao) {
        if (data->getValor() == VALOR_INVALIDO)
            estado = false;
            cout << "falhou testarCenarioFalha catch" << endl;
    }
}

void TUData::tearDown() {
    delete data;
}

void TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    if (estado) cout << "SUCESSO - DATA" << endl;
    else cout << "FALHA - DATA" << endl;
}
