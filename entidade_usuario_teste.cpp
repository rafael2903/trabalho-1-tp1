#include  "entidade_usuario_teste.hpp"

const string TUUsuario::VALOR_NOME_VALIDO = " R.a.F.a.E.l Rodrigues ";
const string TUUsuario::VALOR_SENHA_VALIDO = "aA0123";
const string TUUsuario::VALOR_EMAIL_VALIDO = "ana@ola.com";
const string TUUsuario::VALOR_TELEFONE_VALIDO = "(061)-123456789";

void TUUsuario::setUp() {
    usuario = new Usuario();
    estado = true;
}

void TUUsuario::tearDown() {
    delete usuario;
}

void TUUsuario::testarCenario() {
    Nome nome;
    nome.setValor(VALOR_NOME_VALIDO);
    usuario->setNome(nome);
    if (usuario->getNome().getValor() != VALOR_NOME_VALIDO){
        estado = false;
    }

    Senha senha;
    senha.setValor(VALOR_SENHA_VALIDO);
    usuario->setSenha(senha);
    if (usuario->getSenha().getValor() != VALOR_SENHA_VALIDO){
        estado = false;
    }

    Email email;
    email.setValor(VALOR_EMAIL_VALIDO);
    usuario->setEmail(email);
    if (usuario->getEmail().getValor() != VALOR_EMAIL_VALIDO){
        estado = false;
    }

    Telefone telefone;
    telefone.setValor(VALOR_TELEFONE_VALIDO);
    usuario->setTelefone(telefone);
    if (usuario->getTelefone().getValor() != VALOR_TELEFONE_VALIDO){
        estado = false;
    }
}    

void TUUsuario::run() {
    setUp();
    testarCenario();
    if(estado) cout << "SUCESSO - USUARIO" << endl;
    else cout << "FALHA - USUARIOA" << endl;
    tearDown();
}




