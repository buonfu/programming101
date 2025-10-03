
// Write a program:
//  Input an integer.
//  Display that many '*' characters.
//  Every 5 stars, move to a new line.

// Example:
// Input: 12
// Output:
// *****
// *****
// **


#include <stdio.h>

int main(void)
{
    int i, n;

    printf("Please enter a positive integer: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if (i % 5 != 0) {
            printf("*");
        } else {
            printf("*\n");
        }
    }

    return 0;
}


