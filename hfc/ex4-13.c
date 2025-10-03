// Enter a positive integer n, then sum up from 1 to n.

#include <stdio.h>

int main(void)
{
    int i ;
    int sum = 0;
    int num;

    printf("The value of n:");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        sum += i;
    }

    printf("The sum of integers from 1 to n is: %d", sum);

    return 0;
}