#include <stdio.h>

int main(){

    int X,i;

    scanf("%d", &X);

    for(i=226; i<914; i++){
        if(i%X==0){
            printf("%d\n", i);
        }
    }
    return 0;

}