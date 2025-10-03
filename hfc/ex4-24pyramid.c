#include <stdio.h>

int main(void) 
{
    int n;  
    int i, j, k;
    
    printf("让我们来画一个金字塔。\n");
    printf("金字塔有几层：");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // 打印前导空格 (n - i)
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }

        // 打印星号 (2*i - 1)
        for (int k = 0; k < (2 * i - 1); k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
