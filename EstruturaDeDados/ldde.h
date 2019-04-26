#ifndef LDDE_H
#define LDDE_H
#include <iostream>
#include "noldde.h"
using namespace std;
template <typename L>

class ldde{
    private:
        Noldde<int>* primeiro;
        Noldde<int>* ultimo;
        int n;
    public:
        ldde(): primeiro(NULL), ultimo(NULL), n(0){

        }

        bool insereLDDE(int valor){
            Noldde<int>* novo = new Noldde<int>(valor);
            if(novo == NULL){
                return false;
            }

            Noldde<L>* ptrAnterior = NULL;
            Noldde<L>* ptrAtual = primeiro;

            while(ptrAtual && ptrAtual->conteudo < valor){
                ptrAnterior = ptrAtual;
                ptrAtual = ptrAtual->proximo;
            }

            novo->anterior = ptrAnterior;

            if(ptrAnterior){
                ptrAnterior->proximo = novo;
            }
            else{
                primeiro = novo;
            }

            novo->proximo = ptrAtual;

            if(ptrAtual){
                ptrAtual->anterior = novo;
            }
            else{
                ultimo = novo;
            }
            n++;
            return true;
        }

        void imprimeLDDE(){
            Noldde<L>* ponteiro = primeiro;
            while(ponteiro){
                cout << ponteiro->conteudo << " ";
                ponteiro = ponteiro->proximo;
            }
            cout<<endl;
        }

        bool removeLDDE(int valor){
            Noldde<L>* ptrAtual = primeiro;

            while(ptrAtual && ptrAtual->conteudo < valor){
                ptrAtual = ptrAtual->proximo;
            }

            if(!ptrAtual || ptrAtual->conteudo != valor){
                return false;
            }

            Noldde<int>* ptrAnterior = ptrAtual->anterior;
            Noldde<int>* ptrProximo = ptrAtual->proximo;

            if(ptrAnterior){
                ptrAnterior->proximo = ptrProximo;
            }
            else{
                primeiro = ptrProximo;
            }

            if(ptrProximo){
                ptrProximo->anterior = ptrAnterior;
            }
            else{
                ultimo = ptrAnterior;
            }

            delete ptrAtual;
            n--;
            return true;
         }

        int buscaLDDE(int valor){
            Noldde<int>* atual = primeiro;
            Noldde<int>* anterior = atual->anterior;

            while(atual != NULL){
                if(atual->conteudo == valor){
                    return atual->conteudo;
                }
                anterior = atual->anterior;
                atual = atual->proximo;
            }
            return NULL;
        }




};

#endif // LDDE_H
