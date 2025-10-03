// Find the factors of entered integer and count the number of them.

#include <stdio.h>

int main(void)
{
    int i, n;
    int cnt = 0;

    printf("Please enter a postive integer: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            cnt++;
        }
    }
    return 0;
}