#include <stdio.h>
void main() {
   int i,j,n,start,current;
   scanf("%d",&n);
   start=(n*(n+1))/2;
   for(i=n;i>0;i--)
   {
     current=start;
     for(j=0;j<i;j++)
     {
      printf("%d",current);
      current=current-1;
   }
   printf("\n");
   start=start-i;
   }
 }
