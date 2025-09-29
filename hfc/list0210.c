/*
    A program that reads two integers, calculates what percentage the first integer is of the second, and outputs the result as a real number.
*/

#include <stdio.h>

int main(void)
{
    int a,b;

    puts("Please enter two integers.");
    printf("The integer a: "); scanf("%d", &a);
    printf("The integer b: "); scanf("%d", &b);

    printf("The integer a %d is %f%% of the integer b %d. \n", a,(double) a / b * 100, b);

    return 0;

}