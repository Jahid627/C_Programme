#include<stdio.h>

int main()

{

int x;

float a;
float b;
float answer;

printf("Enter any two value: ");

scanf("%f %f",&a,&b);

printf("\nPress 1 to find sum of that two numbers");

printf("\nPress 2 to find subtract of that two numbers");

printf("\nPress 3 to find multiply of that two numbers");

printf("\nPress 4 to find division of that two numbers");

printf("\nEnter your choice: ");

scanf("%d",&x);

switch(x)

{

case 1:

answer=a+b;

break;

case 2:

answer=a-b;

break;

case 3:

answer=a*b;

break;

case 4:

answer=a/b;

break;

default:

printf("\nYou have entered a wrong choice");

exit(0);

}

printf("\nThe Answer will be = %.2f",answer);

return 0;

}
