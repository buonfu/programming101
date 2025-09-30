/*
    Display an integer in reverse order
*/

#include <stdio.h>

int main(void)
{
    int no;

    do {
        printf("Please enter a positive integer: ");
        scanf("%d", &no);

        if (no <= 0)
            puts("\aPlease do not enter a non-positive integer.");
    } while (no <= 0);

    printf("The integer displayed in reverse is: ");
    while (no > 0) {
        printf("%d", no % 10);   /* display the last digit */
        no /= 10;                /* shift right by one digit */
    }

    puts(".");

    return 0;
}
