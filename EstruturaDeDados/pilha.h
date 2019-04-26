#ifndef PILHA_H
#define PILHA_H
#define MAX 1000
#include<iostream>

class Pilha{
    private:
        int v[MAX];
        int topo;
    public:
        Pilha(): topo(0){

        }

        bool empilha(int valor){
            if(topo == MAX){
                return false;
            }
            v[topo++] = valor;
            return true;
        }

        int desempilha(int valor){
              if(topo == 0){
                return 0;
              }


              if(valor){
                valor = v[--topo];
                return v[topo];
              }
            }

};






#endif // PILHA_H
