#include "classe_teste.hpp"
#include "codigo_teste.hpp"
#include "descricao_teste.hpp"
#include "endereco_teste.hpp"
#include "senha_teste.hpp"
#include "moeda_teste.hpp"
#include "numero_teste.hpp"
#include "telefone_teste.hpp"

int main() {

    TUClasse testeClasse;
    testeClasse.run();

    TUDescricao testeDescricao;
    testeDescricao.run();

    TUCodigo testeCodigo;
    testeCodigo.run();

    TUEndereco testeEndereco;
    testeEndereco.run();

    TUSenha testeSenha;
    testeSenha.run();

    TUMoeda testeMoeda;
    testeMoeda.run();
    
    TUNumero testeNumero;
    testeNumero.run();

    TUTelefone testeTelefone;
    testeTelefone.run();

    return 0;
}
