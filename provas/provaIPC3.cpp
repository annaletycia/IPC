#include <stdio.h>

int main(){

    int N,i;
    double Y, soma=0, media=0;

    scanf("%d", &N);

    for(i=0; i<N; i++){

        scanf("%lf", &Y);
        soma = soma + Y;
    }

    media = soma/N;

    printf("%.3lf %.3lf\n", soma, media);

    return 0;
}