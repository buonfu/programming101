/*
    Count down from the entered integer to 1
    Do not print newline if input is negative
*/

#include    <stdio.h>

int main(void)
{
    int no;

    printf("Please enter an integer: ");
    scanf("%d", &no);

    while (no >= 1) {
        printf("%d ", no--);
    }

    if (no >= 0) {
        printf("\n");
    }

    return 0;
}



// /*
//     Count down from the entered integer to 1
//     (do not execute if input is less than 0,
//      and do not print newline in that case)
// */

// #include <stdio.h>

// int main(void)
// {
//     int no;

//     printf("Please enter a positive integer: ");
//     scanf("%d", &no);

//     if (no > 0) {
//         while (no > 0)
//             printf("%d ", no--);   /* display value, then decrement */

//         printf("\n");   /* print newline only if input > 0 */
//     }

//     return 0;
// }
