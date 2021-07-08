#include <stdio.h>

int main()
{
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);


    if(n > 0)
    {
        printf(" %d is POSITIVE",n);
    }
    else
    {
        printf(" %d is  NEGATIVE", n);
    }

    return 0;
}
