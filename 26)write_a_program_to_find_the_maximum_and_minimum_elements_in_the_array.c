#include <stdio.h>
void  main() {
    int i,mx,mn,n;
    int a[50];
    scanf("%d",&n);
    printf("enter %d elements of the array:\n",n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    mx=a[0];
    mn=a[0];
    for(i=0;i<n;i++)
    {
     if(a[i]>mx)
     {
     mx=a[i];   
     }
     if(a[i]<mn)
     {
       mn=a[i];
     }
    }
    printf("the maximum element is:%d",mx);
   printf("\nthe minimum element is:%d",mn);
}
