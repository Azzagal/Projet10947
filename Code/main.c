#include "filtrer.h"
#include "propriete.h"
#include <stdio.h> 

int main(){

	int T[7]={-1,5,-3,10,12,-2,-4};
    filtrer(T,7);
    for(unsigned i=0; i<7;i++){
        printf("%d",T[i]);
    }
    printf("\n");
}