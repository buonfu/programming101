/*
    Determine the absolute value of the inputed integer.
*/

#include <stdio.h>

int main(void)
{
    int no;

    printf("Please enter an integer: ");
    scanf("%d", &no);

    if (no >= 0)
        printf("The absolute value of this integer is: %d.\n", no);
    else
        printf("The absolute value of this integer is: %d.\n", - no);

    return 0;
}

/*
#include <stdio.h>

int main(void)
{
    int n;

    printf("Please enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    printf("The absolute value is %d.\n", n);

    return 0;
}
*/