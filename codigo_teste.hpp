#include "codigo.hpp"

// 190016841

class TUCodigo {
 private:
    string VALOR_VALIDO = "12A45";
    string VALOR_INVALIDO = "0000";
    bool estado;
    Codigo *codigo;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    void run();
};
