
#include <stdio.h>
#define tam 20

int main(){

    int N[tam], i, aux=0;

    for(i=0; i<tam; i++){
        scanf("%d", &N[i]);
    }
        for(i=0; i<tam/2; i++){
             aux = N[i];
             N[i] = N[tam -1 - i];
             N[tam -1 -i] = aux;
    }
             for(i=0; i<tam; i++){
                 printf("N[%d] = %d\n", i, N[i]);
}
    return 0;
}