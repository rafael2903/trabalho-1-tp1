// Aluno: Luis Fernando Lamellas
// Matrícula: 190016841

#ifndef CODIGO_TESTE_HPP_
#define CODIGO_TESTE_HPP_

#include "codigo.hpp"

// 190016841
class TUCodigo {
    private:
        string VALOR_VALIDO = "12A45";
        string VALOR_INVALIDO = "00000";
        bool estado;
        Codigo *objeto;

        void setUp();
        void testarCenarioSucesso();
        void testarCenarioFalha();
        void tearDown();

    public:
        void run();     
};

#endif // CODIGO_TESTE_HPP_