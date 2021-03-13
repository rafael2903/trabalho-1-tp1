#ifndef DATA_TESTE_HPP_
#define DATA_TESTE_HPP_

#include "data.hpp"

// 190134780
class TUData {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;
        bool estado;
        Data *data;

        void setUp();
        void testarCenarioSucesso();
        void testarCenarioFalha();
        void tearDown();

    public:
        void run();
};

#endif // DATA_TESTE_HPP_
