// Write a program: Based on the integer entered, display digits repeatedly in a loop like the example below.

// Example:
// Input: 25
// Output:
// 1234567890123456789012345

#include <stdio.h>

int main(void)
{
    int i, n;
    int nd;

    printf("Please enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        nd = i % 10;
        printf("%d", nd);
    }

    return 0;
}