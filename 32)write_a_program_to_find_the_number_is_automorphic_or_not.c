#include<stdio.h>
void main()
{
  int n,a,sq;
  scanf("%d",&n);
  a=n;
  sq=n*n;
  if(sq%10==n%10)
      printf("the numer is automotphic");
      else
      printf("the number is not automorphic");
  
}
