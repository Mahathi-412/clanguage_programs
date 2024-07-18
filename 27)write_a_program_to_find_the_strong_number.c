#include <stdio.h>
void main() {
   int n,i,fact,sum=0,rem;
   scanf("%d",&n);
   int temp=n;
   while(n)
   {
      fact=1,i=1;
     rem=n%10;
     while(i<=rem)
     {
       fact=fact*i;
       i++;
     }
     sum=sum+fact;
     n=n/10;
   } 
  if(sum==temp)
  printf("the number is strong number");
  else
  printf("the number is not strong number");
}
