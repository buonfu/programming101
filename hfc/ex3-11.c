/*
    difference is less than or equal to 10
*/

#include <stdio.h>

int main(void)
{
    int a, b;

    puts("Please enter two integers.");
    printf("A: "); scanf("%d", &a);
    printf("B: "); scanf("%d", &b);

    if ((a - b) >= 11 || (b - a) >= 11) {
        printf("The difference of A and B is greater than or equal to 11.\n");
    }
    else {
        printf("The difference of A and B is less than or equal to 10.\n");
    }

    return 0;
}