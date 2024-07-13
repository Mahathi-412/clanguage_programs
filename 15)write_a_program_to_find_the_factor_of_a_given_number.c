#include <stdio.h>
void main() {
   int n,i,fact=1;
   scanf("%d",&n);
   printf("The factors are:");
   for(i=1;i<=n;i++)
   {
     if(n%i==0)
     {
       printf("%d",i);
     }
   }
}
