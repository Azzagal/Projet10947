#include"filtrer.h"
#include"assert.h"
#include<stdlib.h>

static void perm(int *T, int const N, int const i, int const j){
    assert(T != NULL && N > 0);
    int k = T[i];
    T[i]=T[j];
    T[j]= k;
}
            
int filtrer(int*T, const int N){
    assert(T != NULL && N > 0);
    int i = 0;
    int taille = 0;

    while(i < N){
        if(test(T[i])){
            perm(T,N,i,taille);
            taille++;
            i++;
        }
        else{
            T[i] = 0;
            i++;
        }
    }
}