#include <stdio.h>

int main(){
  
  int C, A, q, r, ans;
  
  scanf("%d", &C);
  
  scanf("%d", &A);
  q = A/(C-1);
  r = A%(C-1);
  ans = q;
  
  if(r>0) ans++;
  printf("%d\n",ans);
  }