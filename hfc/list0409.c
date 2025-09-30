/*
    Enter a specified number of integers and display their total and average
*/

#include <stdio.h>

int main(void)
{
    int i = 0;
    int sum = 0;
    int num, tmp;

    printf("How many integers will you enter?: ");
    scanf("%d", &num);

    while (i < num) {
        printf("No.%d: ", ++i);
        scanf("%d", &tmp);
        sum += tmp;
    }

    printf("Total: %d\n", sum);
    printf("Average: %.2f\n", (double) sum / num);

    return 0;
}
