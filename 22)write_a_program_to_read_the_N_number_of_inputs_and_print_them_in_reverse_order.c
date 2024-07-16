#include <stdio.h>
void main()
{
 int i,n;
 int arr[50];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   printf("the elements -%d:",i);
    scanf("%d",&arr[i]);
}
printf("the values stored in the array is:\n");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
 printf("the reversed elemets are:");
 for(i=n-1;i>=0;i--)
 {
  printf("%d",arr[i]);
 }
 }
