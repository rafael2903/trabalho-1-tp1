#ifndef IMOVEL_HPP_
#define IMOVEL_HPP_

#include "codigo.hpp"
#include "classe.hpp"
#include "descricao.hpp"
#include "endereco.hpp"
#include "data.hpp"
#include "numero.hpp"
#include "moeda.hpp"
#include <stdexcept>
#include <iostream>

using namespace std;

///
/// Padrão para representação de imóvel.
///

// 190134780
class Imovel {
    private:
        Codigo codigo;
        Classe classe;
        Descricao descricao;
        Endereco endereco;
        Data dataInicial;
        Data dataFinal;
        Numero hospedes;
        Moeda valor;
        
    public:

///
/// Armazena código informado.
///
/// @param Código.
///

        void setCodigo(const Codigo&);

///
/// Retorna código.
///
/// @return Código.
///

        Codigo getCodigo() const;


///
/// Armazena classe informada.
///
/// @param Classe.
///

        void setClasse(const Classe&);

///
/// Retorna classe.
///
/// @return Classe.
///

        Classe getClasse() const;

///
/// Armazena descrição informada.
///
/// @param Descrição.
///

        void setDescricao(const Descricao&);

///
/// Retorna descrição.
///
/// @return Descrição.
///

        Descricao getDescricao() const;

///
/// Armazena endereço informado.
///
/// @param Endereço.
///

        void setEndereco(const Endereco&);

///
/// Retorna endereço.
///
/// @return Endereço.
///

        Endereco getEndereco() const;

///
/// Armazena data inicial informada.
///
/// @param Data.
///

        void setDataInicial(const Data&);

///
/// Retorna data inicial.
///
/// @return Data.
///

        Data getDataInicial() const;

///
/// Armazena data final informada.
///
/// @param Data.
///

        void setDataFinal(const Data&);

///
/// Retorna data final.
///
/// @return Data.
///

        Data getDataFinal() const;

///
/// Armazena número de hóspedes informado.
///
/// @param Numero.
///

        void setHospedes(const Numero&);

///
/// Retorna número de hóspedes.
///
/// @return Numero.
///

        Numero getHospedes() const;

///
/// Armazena valor informado.
///
/// @param Moeda.
///

        void setValor(const Moeda&);

///
/// Retorna valor.
///
/// @return Moeda.
///

        Moeda getValor() const;

};

inline void Imovel::setCodigo(const Codigo &codigo) {
    this->codigo = codigo;
}
inline Codigo Imovel::getCodigo() const {
    return codigo;
}

inline void Imovel::setClasse(const Classe &classe) {
    this->classe = classe;
}
inline Classe Imovel::getClasse() const {
    return classe;
}

inline void Imovel::setDescricao(const Descricao &descricao) {
    this->descricao = descricao;
}
inline Descricao Imovel::getDescricao() const {
    return descricao;
}

inline void Imovel::setEndereco(const Endereco &endereco) {
    this->endereco = endereco;
}
inline Endereco Imovel::getEndereco() const {
    return endereco;
}

inline void Imovel::setDataInicial(const Data &dataInicial) {
    this->dataInicial = dataInicial;
}
inline Data Imovel::getDataInicial() const {
    return dataInicial;
}

inline void Imovel::setDataFinal(const Data &dataFinal) {
    this->dataFinal = dataFinal;
}
inline Data Imovel::getDataFinal() const {
    return dataFinal;
}

inline void Imovel::setHospedes(const Numero &hospedes) {
    this->hospedes = hospedes;
}
inline Numero Imovel::getHospedes() const {
    return hospedes;
}

inline void Imovel::setValor(const Moeda &valor) {
    this->valor = valor;
}
inline Moeda Imovel::getValor() const {
    return valor;
}

#endif // IMOVEL_HPP_
