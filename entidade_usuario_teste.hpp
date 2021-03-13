#ifndef USUARIO_TESTE_HPP_
#define USUARIO_TESTE_HPP_


#include "entidade_usuario.hpp"

class TUUsuario {
    private:
        const static string VALOR_NOME_VALIDO;
        const static string VALOR_SENHA_VALIDO;
        const static string VALOR_EMAIL_VALIDO;
        const static string VALOR_TELEFONE_VALIDO;

        Usuario *usuario;

        bool estado;
        void setUp();
        void tearDown();
        void testarCenario();
    public:
        void run();
};

#endif // USUARIO_TESTE_HPP_