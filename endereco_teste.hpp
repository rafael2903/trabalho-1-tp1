#ifndef ENDERECO_TESTE_HPP_
#define ENDERECO_TESTE_HPP_

#include "endereco.hpp"

//190142120
class TUEndereco {
    private:
        string VALOR_VALIDO   = "Ana mora em. 407.";
        string VALOR_INVALIDO = "Ana//    ";
        bool estado;
        classeEndereco *endereco;

        void instanciarClasse();
        void liberarMemoria();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        bool run();
};

#endif // ENDERECO_TESTE_HPP_