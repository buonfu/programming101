/*
    Display the sum of the two integers read.
*/

#include <stdio.h>

int main(void)
{
    int n1, n2;
    int wa;         /*the sum*/

    puts("Please enter two integers.");
    printf("The 1st integer: ");    scanf("%d", &n1);
    printf("The 2nd integer: ");    scanf("%d", &n2);

    wa = n1 + n2;

    printf("The sum of two integers is %d. \n", wa);

    return 0;
}