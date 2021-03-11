#ifndef TESTES_H_
#define TESTES_H_

#include <string>
#include "classe.h"
#include "descricao.h"

// Declaracao de classe de teste de unidade de Classe.
// 190134780

class TUClasse {
    private:
        const static int VALOR_VALIDO = 1;
        const static int VALOR_INVALIDO = 4;

        bool estado;
        Classe *classe;

        void setUp();
        void testarCenarioSucesso();
        void testarCenarioFalha();
        void tearDown();

    public:
        bool run();
};

// Declaracao de classe de teste de unidade de Descricao.
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


#endif // TESTES_H_