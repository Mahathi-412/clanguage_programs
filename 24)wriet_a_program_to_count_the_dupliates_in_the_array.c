#include <stdio.h>
void main() {
  int i,j,count=0;
  int arr[]={1,2,3,4,3,2};
  int length=sizeof(arr)/sizeof(arr[0]);
  for(i=0;i<length;i++)
  {
   for(j=i+1;j<length;j++)
   {
     if(arr[i]==arr[j])
     {
     count++;
     break;
     }
   }
  }
  printf("the no.of duplicates is:%d",count);
}
