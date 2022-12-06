#include<stdio.h>
#include<stdlib.h>

main(){

int N,M;
scanf("%d %d",&N,&M);
int matriz[N][M];
int i,j;

for(i=0;i<N;i++){
  for(j=0;j<M;j++){
    scanf("%d",&matriz[i][j]);
  }
}int somaM;
for(i=0;i<M;i++){
  somaM=0;
  if(i%2!=0){
    for(j=0;j<N;j++)
      somaM=somaM+matriz[j][i];
    printf("%d\n",somaM);
  }
}

int somaN;
for(i=0;i<N;i++){
  somaN=0;
  if(i%2==0){
    for(j=0;j<M;j++)
      somaN=somaN+matriz[i][j];
    printf("%d\n",somaN);
  }
}
 return 0;
}
