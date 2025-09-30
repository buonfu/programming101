// Написать программу, которая проверяет, является ли год високосным.
// 编写一个程序，用于检查是否为闰年。

// https://github.com/buonfu/programming101.git

#include <stdio.h>

int main()
{
    int year;

    scanf("%d", &year);

    if ( year % 4 == 0 ) {
        if (year % 400 == 0) {
            printf("Високосный");
        } else if (year % 100 == 0) {
            printf("Невисокосный");
        } else {
            printf("Високосный");
        }

    } else {
        printf("Невисокосный");
    }
    return 0;
}


// #include <stdio.h>

// int main() {
//     int year;
//     scanf("%d", &year);

//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         printf("Високосный");
//     } else {
//         printf("Невисокосный");
//     }

//     return 0;
// }
