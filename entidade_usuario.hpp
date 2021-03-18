#ifndef USUARIO_HPP_
#define USUARIO_HPP_

#include "nome.hpp"
#include "senha.hpp"
#include "email.hpp"
#include "telefone.hpp"
#include <stdexcept>
#include <iostream>

using namespace std;

///
/// Padrão para representação de imóvel.
///

//190142120
class Usuario {
    private:
        Nome nome;
        Senha senha;
        Email email;
        Telefone telefone;
        
    public:

///
/// Armazena nome informado.
///
/// @param Nome.
///

        void setNome(const Nome&);

///
/// Retorna nome.
///
/// @return Nome.
///

        Nome getNome() const;

///
/// Armazena senha informado.
///
/// @param Senha.
///
        
        void setSenha(const Senha&);

///
/// Retorna senha.
///
/// @return Senha.
///

        Senha getSenha() const;

///
/// Armazena email informado.
///
/// @param Email.
///        

        void setEmail(const Email&);

///
/// Retorna email.
///
/// @return Email.
///

        Email getEmail() const;
        
///
/// Armazena telefone informado.
///
/// @param Telefone.
///

        void setTelefone(const Telefone&);

///
/// Retorna telefone.
///
/// @return Telefone.
///

        Telefone getTelefone() const;

};

inline void Usuario::setNome(const Nome &nome) {
    this->nome = nome;
}
inline Nome Usuario::getNome() const {
    return nome;
}

inline void Usuario::setSenha(const Senha &senha) {
    this->senha = senha;
}
inline Senha Usuario::getSenha() const {
    return senha;
}

inline void Usuario::setEmail(const Email &email) {
    this->email = email;
}
inline Email Usuario::getEmail() const {
    return email;
}

inline void Usuario::setTelefone(const Telefone &telefone) {
    this->telefone = telefone;
}
inline Telefone Usuario::getTelefone() const {
    return telefone;
}

#endif // USUARIO_HPP_
