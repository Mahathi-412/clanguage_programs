#include <stdio.h>
void main() {
   int a,b,i,j;
   scanf("%d%d",&a,&b);
   for(i=1;i<=a;i++)
   {
     for(j=1;j<=b;j++)
     {
      printf("*");
     }
     printf("\n");
   }
   
}
