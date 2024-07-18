#include <stdio.h>
void main() {
    int i,n1,n2,a[50],b[50],c[100];
    scanf("%d",&n1);
    printf("Enter %d elements for the first array:\n", n1);
    for(i=0;i<n1;i++)
    {
     scanf("%d",&a[i]);
    }
    scanf("%d",&n2);
    printf("Enter %d elements for the second array:\n", n2);
    for(i=0;i<n2;i++)
    {
     scanf("%d",&b[i]);
    }
    for(i=1;i<n1;i++)
    {
     c[i]=a[i];
    }
    for(i=0;i<n2;i++)
    {
    c[i+n1]=b[i];
    }
     printf("the merged array is:");
     for(i=0;i<n1+n2;i++)
     {
     printf("%d",c[i]);
     }
}
