#ifndef FILACIRCULAR_H
#define FILACIRCULAR_H
#define MAX 50
#include<iostream>

using namespace std;

class FilaCirc{
    private:
        int v[MAX+1];
        int i;
        int f;
        int n;
    public:
        FilaCirc(): i(0), f(0), n(MAX+1){

        }

        bool enfileira(int valor){
            if( ((f+1) % n) == 1 ){
                return false;
            }
            v[f] = valor;
            f = (f+1) % n;
            return true;
        }

        void mostraFilaCirc(){
            for(int h = i; h % n != f; h = (h+1) % n){
               cout << v[h] <<" ";
            }
        }

        int desenfileira(int valor){

             if(i==f){
                if(valor){
                  for(int i=0;i<n;i++){
                    if(v[i] == valor){
                      return v[0];
                    }
                  }

                }
               }
             int temp = v[i];

             i = (i+1) % n;


             return temp;
      }

};


#endif // FILACIRCULAR_H
