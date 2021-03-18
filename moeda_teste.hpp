// Aluno: Luis Fernando Lamellas
// Matrícula: 190016841

#ifndef MOEDA_TESTE_HPP_
#define MOEDA_TESTE_HPP_

#include "moeda.hpp"

class TUMoeda {
    private:
        string VALOR_VALIDO = "10.000,00";
        string VALOR_INVALIDO = "10.00.000,00";
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