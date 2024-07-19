#include <stdio.h>
void main() {
  int i,j,k,count=0;
  int arr[]={1,2,3,4,3,2};
  int n=sizeof(arr)/sizeof(arr[0]);
  for(i=0;i<n;i++)
  {
   for(j=i+1;j<n;j++)
   {
     if(arr[i]==arr[j])
     {
        for ( k = j; k < n - 1; k++)  
        {  
            arr[k] = arr [k + 1];  
        }  
        n--; 
        j--;      
      }  
    } 
  } 
    printf (" \n Array elements after deletion of the duplicate elements: ");  
    for ( i = 0; i < n; i++)  
    {  
        printf (" %d \t", arr[i]);  
    } 
}  
