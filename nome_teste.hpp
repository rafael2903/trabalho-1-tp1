#ifndef NOME_TESTE_HPP_
#define NOME_TESTE_HPP_

#include "nome.hpp"

// 190134780
class TUNome {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;
        bool estado;
        Nome *nome;

        void setUp();
        void testarCenarioSucesso();
        void testarCenarioFalha();
        void tearDown();

    public:
        void run();
};

#endif // NOME_TESTE_HPP_