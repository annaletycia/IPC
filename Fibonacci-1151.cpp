#include <stdio.h>

int main(){

    int N, i, ant=0, prox=1, soma=0;

    scanf("%d", &N);

    for(i=1; i<N; i++){
    
        if(i%2==1){

            printf("%d ", soma); 
            soma = ant + prox;
            ant = soma;          
        }
        else if(i==2){            
            printf("%d ", soma);
        }
        else if(i%2==0){

            printf("%d ", soma);
            soma = ant + prox;
            prox = soma;
            
        }
    }

    printf("%d\n ",soma);
return 0;
}