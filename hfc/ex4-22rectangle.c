// Generate a rectangle based on the length you enter. The longer side as width.

#include <stdio.h>

int main(void)
{
    int a, b;
    int h, w;
    int i, j;

    printf("Let's draw a rectangle with *!\n");
    printf("one side: ");       scanf("%d", &a);
    printf("other side: ");     scanf("%d", &b);

    w = (a < b) ? b : a;
    h = (a < b) ? a : b;

    for (i = 1; i <= h; i++) {
        for (j = 1; j <= w; j++) {
            putchar('*');
        }   putchar('\n');
    }
    return 0;
}