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
        void setCodigo(const Codigo&);
        Codigo getCodigo() const;
        
        void setClasse(const Classe&);
        Classe getClasse() const;

        void setDescricao(const Descricao&);
        Descricao getDescricao() const;

        void setEndereco(const Endereco&);
        Endereco getEndereco() const;

        void setDataInicial(const Data&);
        Data getDataInicial() const;

        void setDataFinal(const Data&);
        Data getDataFinal() const;

        void setHospedes(const Numero&);
        Numero getHospedes() const;

        void setValor(const Moeda&);
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
