#include  "entidade_imovel_teste.hpp"

const string TUImovel::VALOR_CODIGO_VALIDO = "12A45";
const string TUImovel::VALOR_DESCRICAO_VALIDO = "rafael.";
const string TUImovel::VALOR_ENDERECO_VALIDO = "Ana mora em. 407.";
const string TUImovel::VALOR_DATA_VALIDO = "15-11-22";

void TUImovel::setUp() {
    imovel = new Imovel();
    estado = true;
}

void TUImovel::testarCenario() {
    Codigo codigo;
    codigo.setValor(VALOR_CODIGO_VALIDO);
    imovel->setCodigo(codigo);
    if (imovel->getCodigo().getValor() != VALOR_CODIGO_VALIDO){
        estado = false;
    }

    Classe classe;
    classe.setValor(VALOR_CLASSE_VALIDO);
    imovel->setClasse(classe);
    if (imovel->getClasse().getValor() != VALOR_CLASSE_VALIDO){
        estado = false;
    }

    Descricao descricao;
    descricao.setValor(VALOR_DESCRICAO_VALIDO);
    imovel->setDescricao(descricao);
    if (imovel->getDescricao().getValor() != VALOR_DESCRICAO_VALIDO){
        estado = false;
    }

    Endereco endereco;
    endereco.setValor(VALOR_ENDERECO_VALIDO);
    imovel->setEndereco(endereco);
    if (imovel->getEndereco().getValor() != VALOR_ENDERECO_VALIDO){
        estado = false;
    }

    Data dataInicial;
    dataInicial.setValor(VALOR_DATA_VALIDO);
    imovel->setDataInicial(dataInicial);
    if (imovel->getDataInicial().getValor() != VALOR_DATA_VALIDO){
        estado = false;
    }

    Data dataFinal;
    dataFinal.setValor(VALOR_DATA_VALIDO);
    imovel->setDataFinal(dataFinal);
    if (imovel->getDataFinal().getValor() != VALOR_DATA_VALIDO){
        estado = false;
    }

    Numero hospedes;
    hospedes.setValor(VALOR_NUMERO_VALIDO);
    imovel->setHospedes(hospedes);
    if (imovel->getHospedes().getValor() != VALOR_NUMERO_VALIDO){
        estado = false;
    }

    Moeda valor;
    valor.setValor(VALOR_MOEDA_VALIDO);
    imovel->setValor(valor);
    if (imovel->getValor().getValor() != VALOR_MOEDA_VALIDO){
        estado = false;
    }
}    

void TUImovel::tearDown() {
    delete imovel;
}

void TUImovel::run() {
    setUp();
    testarCenario();
    tearDown();
    
    if(estado) cout << "SUCESSO - IMOVEL" << endl;
    else cout << "FALHA - IMOVEL" << endl;
}




