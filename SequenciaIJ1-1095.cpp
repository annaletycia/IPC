#include <stdio.h>

int main(){

    int I=1, J;

    for(J=60; J<=0; J-=5){
        I+=3;
        printf("I=%d J=%d\n", I, J);
    }

return 0;
}