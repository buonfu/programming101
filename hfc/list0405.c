/*
    Count down from the entered integer to 0
*/

#include <stdio.h>

int main(void)
{
    int no;

    printf("Please enter a positive integer: ");
    scanf("%d", &no);

    while (no >= 0) {
        printf("%d", no);
        no--;   /* decrement the value of no */

        printf("\n");   /* new line */
    }
    
    return 0;
}
