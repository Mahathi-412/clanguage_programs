#include <stdio.h>
void main() {
   int y;
   scanf("%d",&y);
   if((y%4==0)&&(y%100!=0)||(y%400==0))
   printf("The year is leap year");
   else
   printf("The year is not leap year");
}
