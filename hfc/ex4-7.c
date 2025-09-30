/*
    Display all powers of 2 less than the entered integer
*/

#include <stdio.h>

int main(void)
{
    int i, no;

    printf("Please enter a positive integer: ");
    scanf("%d", &no);

    i = 2;

    while (no > i)
    {
        printf("%d ", i);
        i *= 2;
    }
    
    printf("\n");

    return 0;
}