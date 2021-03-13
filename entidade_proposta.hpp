#ifndef PROPOSTA_HPP_
#define PROPOSTA_HPP_

#include "moeda.hpp"
#include "numero.hpp"
#include "data.hpp"
#include "codigo.hpp"
#include <stdexcept>
#include <iostream>

using namespace std;

class Proposta {
    private:
        Codigo codigo;
        Data dataInicial;
        Data dataFinal;
        classeNumero hospedes;
        Moeda valor;
    public:
        void setCodigo(const Codigo&);
        Codigo getCodigo() const;

        void setDataInicial(const Data&);
        Data getDataInicial() const;

        void setDataFinal(const Data&);
        Data getDataFinal() const;

        void setHospedes(const classeNumero&);
        classeNumero getHospedes() const;

        void setValor(const Moeda&);
        Moeda getValor() const;
};

inline void Proposta::setCodigo(const Codigo &codigo) {
    this->codigo = codigo;
}
inline Codigo Proposta::getCodigo() const {
    return codigo;
}

inline void Proposta::setDataInicial(const Data &data) {
    this->dataInicial = data;
}
inline Data Proposta::getDataInicial() const {
    return dataInicial;
}

inline void Proposta::setDataFinal(const Data &data) {
    this->dataFinal = data;
}
inline Data Proposta::getDataFinal() const {
    return dataFinal;
}

inline void Proposta::setHospedes(const classeNumero &numero) {
    this->hospedes = numero;
}
inline classeNumero Proposta::getHospedes() const {
    return hospedes;
}

inline void Proposta::setValor(const Moeda &valor) {
    this->valor = valor;
}
inline Moeda Proposta::getValor() const {
    return valor;
}

#endif // PROPOSTA_HPP_
