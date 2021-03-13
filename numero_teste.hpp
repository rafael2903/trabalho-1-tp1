#ifndef NUMERO_TESTE_HPP_
#define NUMERO_TESTE_HPP_

#include "numero.hpp"

// 190142120
class TUNumero {
    private:
        const static int VALOR_VALIDO = 12;
        const static int VALOR_INVALIDO = 23;
        bool estado;
        classeNumero *numero;

        void setUp();
        void testarCenarioSucesso();
        void testarCenarioFalha();
        void tearDown();

    public:
        void run();
};

#endif // NUMERO_TESTE_HPP_