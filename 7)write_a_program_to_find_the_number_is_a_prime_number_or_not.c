#include <stdio.h>
void main() {
   int n,i;
   int count=0;
   scanf("%d",&n);
   for(i=2;i<=n;i++)
   {
     if(n%i==0)
     count++;
   }
   if(count==2)
   printf("The number is prime");
   else
   printf("The number is not prime");
}
