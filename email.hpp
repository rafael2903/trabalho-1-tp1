#ifndef EMAIL_HPP_
#define EMAIL_HPP_

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

//190142120

class classeEmail {
    private:
        string email;
        bool validar(string);
        
    public:
        void setValor(string);
        string getValor();
};

inline string classeEmail::getValor() {
    return email;
}

#endif  // EMAIL_HPP_