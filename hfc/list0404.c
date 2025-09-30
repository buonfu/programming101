/*
    Keep entering integers, display their sum and average * using compound assignment operators and the post-increment operator.
*/

#include <stdio.h>

int main(void)
{
    int sum = 0;
    int cnt = 0;
    int retry;

    do {
        int t;

        printf("Please enter an integer: ");
        scanf("%d", &t);

        sum += t;
        cnt ++;

        printf("Continue or not? <Yes - 0/No - 9>: ");
        scanf("%d", &retry);
    }   while (retry == 0);

    printf("The sum is %d, and their average is %.2f. \n", sum, (double) sum / cnt);

    return 0;
}