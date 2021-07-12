
#include<stdio.h>
int main()
{
   int year, z;

   printf("Enter Year: ");
   scanf("%d",&year);

   z=((year%4==0)&&((year%400==0)||(year%100!=0)));

   switch(z)
   {

   case 1:
     printf("Leap Year.");
     break;

   case 0:
     printf("Not Leap Year.");
     break;

   default:
     printf("Invalid.");
     break;

   }

   return 0;
}
