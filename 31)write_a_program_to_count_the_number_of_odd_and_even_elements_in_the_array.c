#include <stdio.h>
void main() {
   int i,n,a[50];
int odd_count=0;
   int even_count=0;
   scanf("%d",&n);
   printf("enter %d elements in the array:\n",n);
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
    if(a[i]%2==0)
    even_count++;
    else
    odd_count++;
   }
   printf("the even count is:%d",even_count);
   printf("the odd count is:%d",odd_count);
}
