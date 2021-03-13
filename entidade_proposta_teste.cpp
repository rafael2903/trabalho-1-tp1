// Aluno: Luis Fernando Lamellas
// Matrícula: 190016841

#include "entidade_proposta_teste.hpp"

void TUProposta::setUp() {
    entidade = new Proposta;
    estado = true;
}

void TUProposta::tearDown() {
    delete entidade;
}

void TUProposta::testarCenario() {
    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    entidade->setCodigo(codigo);
    if(entidade->getCodigo().getValor() != VALOR_VALIDO_CODIGO) estado = false;

    Data dataInicial;
    dataInicial.setValor(VALOR_VALIDO_DATA_INICIAL);
    entidade->setDataInicial(dataInicial);
    if(entidade->getDataInicial().getValor() != VALOR_VALIDO_DATA_INICIAL) estado = false;

    Data dataFinal;
    dataFinal.setValor(VALOR_VALIDO_DATA_FINAL);
    entidade->setDataFinal(dataFinal);
    if(entidade->getDataFinal().getValor() != VALOR_VALIDO_DATA_FINAL) estado = false;

    classeNumero hospedes;
    hospedes.setNumero(VALOR_VALIDO_HOSPEDES);
    entidade->setHospedes(hospedes);
    if(entidade->getHospedes().getNumero() != VALOR_VALIDO_HOSPEDES) estado = false;

    Moeda valor;
    valor.setValor(VALOR_VALIDO_MOEDA);
    entidade->setValor(valor);
    if(entidade->getValor().getValor() != VALOR_VALIDO_MOEDA) estado = false;
}

void TUProposta::run() {
    setUp();
    testarCenario();
    if(estado) cout << "SUCESSO - PROPOSTA" << endl;
    else cout << "FALHA - PROPOSTA" << endl;
    tearDown();
}