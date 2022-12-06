#include <stdio.h>

int main(){

    int i,j;

    for(i=0; i<=2; i=i+0.2){
        for(j=i+1; j<=i+3; j++){
            printf("I=%d J=%d\n", i, j);
        }
    }
    return 0;
}