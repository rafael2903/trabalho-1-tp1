#ifndef EMAIL_TESTE_HPP_
#define EMAIL_TESTE_HPP_

#include "email.hpp"

// 190142120
class TUEmail {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;
        bool estado;
        classeEmail *email;

        void setUp();
        void testarCenarioSucesso();
        void testarCenarioFalha();
        void tearDown();

    public:
        void run();
};

#endif // EMAIL_TESTE_HPP_