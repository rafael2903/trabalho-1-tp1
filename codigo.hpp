#ifndef CODIGO_H_
#define CODIGO_H_

// 190016841

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

class Codigo {
 private:
    string valorString;
    bool validar(string);
 public:
    void setValor(string);
    string getValor();
};

inline string Codigo::getValor() {
   return valorString;
}

#endif // CODIGO_H_
