#include <stdio.h>
void main() {
  int i,n=4;
  int arr1[4]={1,3,5,7};
  int arr2[n];
  for(i=0;i<n;i++)
  {
   arr2[i]=arr1[i]; 
  }
  printf("the arrary 2 is:");
  for(i=0;i<n;i++)
  {
    printf("%d",arr2[i]);
  }
}
