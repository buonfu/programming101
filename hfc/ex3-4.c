/*
    Compare two integers.
*/

#include <stdio.h>

int main(void)
{
    int a, b;

    puts("Please enter two integer.");
    printf("Please enter the integer A: "); scanf("%d", &a);
    printf("Please enter the integer B: "); scanf("%d", &b);

    if (a == b)
        puts("A and B are equal.");
    else if (a > b)
        puts("A is greater than B.");
    else 
        puts("A is smaller than B.");

    return 0;
}