#ifndef NOLDDE_H
#define NOLDDE_H
#include <iostream>

class LDDE;
template<typename L>

class Noldde{
    public:
        int conteudo;
        Noldde<int>* proximo;
        Noldde<int>* anterior;

        Noldde(int conteudo): conteudo(conteudo), proximo(NULL), anterior(NULL){

        }
        friend class LDDE;
};
#endif // NOLDDE_H
