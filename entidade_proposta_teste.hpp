// Aluno: Luis Fernando Lamellas
// Matrícula: 190016841

#ifndef PROPOSTA_TESTE_HPP_
#define PROPOSTA_TESTE_HPP_

#include "entidade_proposta.hpp"

class TUProposta {
    private:
        string VALOR_VALIDO_CODIGO = "12A45";
        string VALOR_VALIDO_DATA_INICIAL = "02-03-95";
        string VALOR_VALIDO_DATA_FINAL = "02-03-22";
        int VALOR_VALIDO_HOSPEDES = 17;
        double VALOR_VALIDO_MOEDA = 1000.92;
        
        Proposta *entidade;
        bool estado;

        void setUp();
        void testarCenario();
        void tearDown();

    public:
        void run();
};

#endif // PROPOSTA_TESTE_HPP_