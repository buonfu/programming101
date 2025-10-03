// Time table with column lable and 

#include <stdio.h>

int main(void)
{
    int i, j, k;

    printf("  |");

    for (k = 1; k <= 9; k++) {
        printf("%3d", k);
    }

    putchar('\n');

    printf("------------------------------\n");

    for (i = 1; i <= 9; i++) {
        printf("%d |", i);
        for(j = 1; j <= 9; j++) {
            printf("%3d", i * j);
        }   putchar('\n');
    }
    return 0;
}


// #include <stdio.h>

// int main() {
//     int i, j;

//     // 打印表头（横坐标）
//     printf("   |");
//     for (j = 1; j <= 9; j++) {
//         printf("%4d", j);
//     }
//     printf("\n");

//     // 打印分隔线
//     printf("---+");
//     for (j = 1; j <= 9; j++) {
//         printf("----");
//     }
//     printf("\n");

//     // 打印乘法表主体
//     for (i = 1; i <= 9; i++) {
//         printf("%2d |", i);  // 打印纵坐标
//         for (j = 1; j <= 9; j++) {
//             printf("%4d", i * j);
//         }
//         printf("\n");
//     }

//     return 0;
// }
