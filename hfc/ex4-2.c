/*
    Read two integers and enumerate the sum of all integers (included) bounded by them.
*/

#include <stdio.h>

int main(void)
{
    double sum = 0;
    int retry;

    do {
        int n1, n2;

        puts("Please enter two integers. ");
        printf("Integer A: "); scanf("%d", &n1);
        printf("Integer B: "); scanf("%d", &n2);

        if (n1 == n2) {
            printf("The sum is %.2f. \n", sum);
        }   else if (n1 > n2) {
            sum = ((n1 - n2 + 1) * (n1 + n2) / 2);
            printf("The sum of all integers greater than or equal to %d and less than or equal to %d is %.2f.\n ", n1, n2, sum);
        }   else {
            sum = ((n2 - n1 + 1) * (n1 + n2) / 2);
            printf("The sum of all integers greater than or equal to %d and less than or equal to %d is %.2f.\n ", n2, n1, sum);
        }

        printf("Continue or not? <Yes - 0/No - 9>: ");
        scanf("%d", &retry);
    }   while (retry == 0);
    
    return 0;
}

/*
#include <stdio.h>

int main(void)
{
    double sum = 0;
    int retry;

    do {
        int n1, n2;
        printf("Please enter two integers.\n");
        printf("Integer A: "); scanf("%d", &n1);
        printf("Integer B: "); scanf("%d", &n2);

        int lo = n1 < n2 ? n1 : n2;
        int hi = n1 < n2 ? n2 : n1;

        sum = (double)(hi - lo + 1) * (lo + hi) / 2;

        if (lo == hi) {
            printf("The sum is %.2f.\n", sum);
        } else {
            printf("The sum of all integers greater than or equal to %d and less than or equal to %d is %.2f.\n",
                   lo, hi, sum);
        }

        printf("Continue or not? <Yes - 0/No - 9>: ");
        scanf("%d", &retry);
    } while (retry == 0);

    return 0;
}

*/