#ifndef MOEDA_TESTE_HPP_
#define MOEDA_TESTE_HPP_

#include "moeda.hpp"

// 190016841
class TUMoeda {
    private:
        double VALOR_VALIDO = 10000;
        double VALOR_INVALIDO = -1000;
        bool estado;
        Moeda *objeto;

        void setUp();
        void testarCenarioSucesso();
        void testarCenarioFalha();
        void tearDown();

    public:
        void run();     
};

#endif // MOEDA_TESTE_HPP_