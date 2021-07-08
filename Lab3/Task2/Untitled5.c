#include <stdio.h>
int main() {
    int n;
    printf("Enter an integer");
    scanf("%d",&n);


    if(n%7==0)
        printf("%d is Multiple of  7", n);
    else
        printf("%d is not Multiple of 7", n);

    return 0;
}
