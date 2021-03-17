// Aluno: Luis Fernando Lamellas
// Matrícula: 190016841

#ifndef PROPOSTA_HPP_
#define PROPOSTA_HPP_

#include "moeda.hpp"
#include "numero.hpp"
#include "data.hpp"
#include "codigo.hpp"

using namespace std;

///
/// Padrão para representação de proposta.
///

class Proposta {
    private:
        Codigo codigo;
        Data dataInicial;
        Data dataFinal;
        Numero hospedes;
        Moeda valor;

    public:

///
/// Armazena código informado.
///
/// @param Codigo.
///

        void setCodigo(const Codigo&);

///
/// Retorna código.
///
/// @return Codigo.
///

        Codigo getCodigo() const;

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
/// Armazena hóspedes informado.
///
/// @param Numero.
///

        void setHospedes(const Numero&);

///
/// Retorna hóspedes.
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

inline void Proposta::setHospedes(const Numero &numero) {
    this->hospedes = numero;
}
inline Numero Proposta::getHospedes() const {
    return hospedes;
}

inline void Proposta::setValor(const Moeda &valor) {
    this->valor = valor;
}
inline Moeda Proposta::getValor() const {
    return valor;
}

#endif // PROPOSTA_HPP_
