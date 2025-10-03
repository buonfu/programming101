// Write a program that displays the square of each integer from 1 to n. 

#include <stdio.h>

int main(void)
{
    int i, n;

    printf("Please enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("The square of %d is: %d\n", i, i * i);
    }

    return 0;
}
