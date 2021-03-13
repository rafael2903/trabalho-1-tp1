#ifndef USUARIO_HPP_
#define USUARIO_HPP_

#include "nome.hpp"
#include "senha.hpp"
#include "email.hpp"
#include "telefone.hpp"
#include <stdexcept>
#include <iostream>

using namespace std;

class Usuario {
    private:
        Nome nome;
        Senha senha;
        Email email;
        Telefone telefone;
        
    public:
        void setNome(const Nome&);
        Nome getNome() const;
        
        void setSenha(const Senha&);
        Senha getSenha() const;

        void setEmail(const Email&);
        Email getEmail() const;

        void setTelefone(const Telefone&);
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
