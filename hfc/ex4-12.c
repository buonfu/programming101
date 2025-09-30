/*
    Read a positive integer and display its number of digits
*/

#include <stdio.h>

int main(void)
{
    int n;
    int di = 0;

    do {
        printf("Please enter a postive integer: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("\aPlease do not enter a non-positive integer!");
        } 
    }   while (n <= 0);

    printf("The number of digits of entered integer %d is: ", n);
    while (n  > 0)
    {
        n /= 10;
        di++;
    }
    printf("%d", di);

    return 0;
}