// Enter a specified number of integers and display their total and average.
// use *for*.

#include <stdio.h>

int main(void)
{
    int i = 0;
    int sum = 0;
    int num, tmp;

    printf("How many integers will you enter?: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("No.%d:", i + 1); // 注意这里为什么不是i++ 且i的值仍是0；
        scanf("%d", &tmp);

        sum += tmp;
    }

    printf("Total: %d\n", sum);
    printf("Average: %.2f\n", (double) sum / num);

    return 0;

}