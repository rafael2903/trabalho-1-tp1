#ifndef DATA_HPP_
#define DATA_HPP_

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

// 190134780
class Data {
    private:
        string data;
        bool validar(string);

    public:
        void setValor(string);
        string getValor();
};

inline string Data::getValor() {
    return data;
}

#endif // DATA_HPP_