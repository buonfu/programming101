/*
    Display '*' repeatedly.
    The total count equals the entered integer.
    If the entered integer is <= 0, display nothing.
*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Please enter an integer: ");
    scanf("%d", &n);

    if (n > 0) {
        while (n-- > 0)
        {
            putchar('*');
            putchar('\n');
        }
        putchar('\n');
    }
    return 0;
}