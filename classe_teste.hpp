#ifndef CLASSE_TESTE_HPP_
#define CLASSE_TESTE_HPP_

#include "classe.hpp"

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
        void run();
};

#endif // CLASSE_TESTE_HPP_