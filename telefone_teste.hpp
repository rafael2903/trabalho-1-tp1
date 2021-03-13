// Aluno: Luis Fernando Lamellas
// Matrícula: 190016841

#ifndef TELEFONE_TESTE_HPP_
#define TELEFONE_TESTE_HPP_

#include "telefone.hpp"

class TUTelefone {
    private:
        string VALOR_VALIDO   = "(061)-123456789";
        string VALOR_INVALIDO = ")061(-123456789";
        bool estado;
        Telefone *objeto;

        void setUp();
        void testarCenarioSucesso();
        void testarCenarioFalha();
        void tearDown();

    public:
        void run();     
};

#endif // TELEFONE_TESTE_HPP_