/*
    Alternately display '+' and '-'
    The total count equals the entered integer.
    If the entered integer is <= 0, display nothing.
*/


#include <stdio.h>

int main(void)
{
    int num;

    printf("Please enter an integer:");
    scanf("%d", &num);

    if (num > 0) {
        while (num > 0) {
            if (num-- % 2 == 1) {
                putchar('+');
            }   else {
                putchar('-');
            }
        }
        putchar('\n');
    }

    return 0;
}