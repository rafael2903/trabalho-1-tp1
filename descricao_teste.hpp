#ifndef DESCRICAO_TESTE_HPP_
#define DESCRICAO_TESTE_HPP_

#include <string>
#include "descricao.h"

// 190134780
class TUDescricao {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;
        bool estado;
        Descricao *descricao;

        void setUp();
        void testarCenarioSucesso();
        void testarCenarioFalha();
        void tearDown();

    public:
        bool run();
};

#endif // DESCRICAO_TESTE_HPP_