#ifndef IMOVEL_HPP_H
#define IMOVEL_HPP_H

#include "entidade_imovel.hpp"

// 190134780
class TUImovel {
    private:
        const static string VALOR_CODIGO_VALIDO;
        const static int VALOR_CLASSE_VALIDO = 1;
        const static string VALOR_DESCRICAO_VALIDO;
        const static string VALOR_ENDERECO_VALIDO;
        const static string VALOR_DATA_VALIDO;
        const static int VALOR_NUMERO_VALIDO = 12;
        const static int VALOR_MOEDA_VALIDO = 10000;

        Codigo codigo;
        Classe classe;
        Descricao descricao;
        Endereco endereco;
        
        Data dataInicial;
        Data dataFinal;
        Numero hospedes;
        Moeda valor;

        Imovel *imovel;
        bool estado;

        void setUp();
        void testarCenario();
        void tearDown();

    public:
        void run();
};

#endif // IMOVEL_HPP_H