/*
    Determine whether the smaller of two integers is a divisor of the larger one.
*/


#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Please enter two integers.\n");
    printf("Integer A: ");
    scanf("%d", &a);
    printf("Integer B: ");
    scanf("%d", &b);

    if (a % b == 0)
        printf("B is a divisor of A.\n");
    else
        printf("B is not a divisor of A.\n");

    return 0;
}
