//  Upper triangular matrix.

// #include <stdio.h>

// int main(void)
// {
//     int i, j, len;

//     puts("生成直角在右上方的等腰直角三角形。");
//     printf("短边：");
//     scanf("%d", &len);

//     for (i = 1; i <= len; i++) {
//         for (j = 1; j <= len; j++) {
//             if (j >= i) {
//                 putchar('*');
//             } else {
//                 printf(" ");
//             }           
//         }   putchar('\n');
//     }
//     return 0;
// }

//  Upper left triangular.

#include <stdio.h>

int main(void)
{
    int i, j, len;

    puts("生成直角在左上方的等腰直角三角形。");
    printf("短边：");
    scanf("%d", &len);

    for (i = 1; i <= len; i++) {
        for (j = 1; j <= (len - i + 1); j++) {
                putchar('*');     
        }   putchar('\n');
    }
    return 0;
}