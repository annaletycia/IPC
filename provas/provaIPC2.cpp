#include <stdio.h>

    int main (){

        int W, Y, X, Z;
        float Resposta;

            scanf("%d %d %d %d", &W, &Y, &X, &Z);

    if( W < Y && Z < X && Y != Z){
        Resposta = (W+X)/(Y-Z);
        printf("%f\n", Resposta);

    }else {
        printf("Calcularei depois\n");
    }
return 0;
    }