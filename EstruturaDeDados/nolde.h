#ifndef NOLDE_H
#define NOLDE_H

#include <iostream>
using namespace std;

template <typename T>
class LDE;

template <typename T>
class No{
    private:
        int valor;
        No<int>* proximo;
        No(int valor): valor(valor), proximo(NULL){

        }
    public:
        ~No(){

        }

    friend class LDE<int>;

};

#endif // NOLDE_H
