#include "classe.h"

// 190134780
class TUClasse {
    private:
        const static int VALOR_VALIDO   = 1;
        const static int VALOR_INVALIDO = 4;
        bool estado;
        Classe *classe;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        bool run();
};
