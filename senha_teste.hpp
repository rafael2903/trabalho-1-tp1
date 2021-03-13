// Aluno: Luis Fernando Lamellas
// Matrícula: 190016841

#ifndef SENHA_TESTE_HPP_
#define SENHA_TESTE_HPP_

#include "senha.hpp"

// 190016841
class TUSenha {
    private:
        string VALOR_VALIDO = "aA0123";
        string VALOR_INVALIDO = "Abc0DA";
        bool estado;
        Senha *objeto;

        void setUp();
        void testarCenarioSucesso();
        void testarCenarioFalha();
        void tearDown();

    public:
        void run();     
};

#endif // SENHA_TESTE_HPP_