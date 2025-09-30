/*
    Display all integers from 0 up to the entered positive integer
*/

#include <stdio.h>

int main(void)
{
    int i, no;

    printf("Please enter a positive integer: ");
    scanf("%d", &no);

    i = 0;

    if (no > 0) {
        while (no >= i)
        {
            printf("%d ", i++);
        }
        
        printf("\n");
    }

    return 0;
}