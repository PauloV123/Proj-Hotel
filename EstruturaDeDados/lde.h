#ifndef LDE_H
#define LDE_H
#include <iostream>
#include "nolde.h"

using namespace std;

template <typename T>
class LDE{
    private:
        int n;
        No<int>* primeiro;

    public:
        LDE(): n(0), primeiro(NULL){

        }

        bool insere(int valor){
            No<int>* novo = new No<int>(valor);
            if(novo == NULL){
              return false;
            }


            No<int>* anterior = NULL;
            No<int>* atual = primeiro;

            while(atual && valor > atual->valor){
                anterior = atual;
                atual = atual->proximo;
            }

            novo->proximo = atual;
            if(anterior!=NULL){
                anterior->proximo = novo;
            }else{
                primeiro = novo;
            }
            n++;
            return true;
        }

    void imprime(){
        No<int>* atual = primeiro;
        while(atual){
            cout << atual->valor << " ";
            atual = atual->proximo;
        }
        cout << endl;
    }
  bool Busca(int valor){
    No<int>* atual = primeiro;
    No<int>* anterior = NULL;

    while(atual && atual->valor != valor){

        anterior = atual;
        atual = atual->proximo;
      }
      if(atual->valor == valor){
          cout << "Valor: " << atual->valor << " achado!"<<endl;
          return true;
      }else{
        return false;
      }

  }

  bool Remove(int valor){
    No<int>* atual = primeiro;
    No<int>* anterior = NULL;

    while(atual && atual->valor != valor){
      anterior = atual;
      atual = atual->proximo;
    }
    if(atual && atual->valor == valor){
          anterior->proximo = atual->proximo;
          delete atual;
          return true;
      }else{
        return false;
      }


  }
    virtual ~LDE(){
        No<int>* atual = primeiro;
        No<int>* prox;
        while(atual){
            prox = atual->proximo;
            delete atual;
            atual = prox;
        }
    }


};

#endif // LDE_H
