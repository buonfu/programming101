/*
    Display all positive even numbers less than the entered integer
*/

#include <stdio.h>

int main(void)
{
    int i, no;

    printf("Please enter a positive integer: ");
    scanf("%d", &no);

    i = 0;

    if (no > 0) {
        while (no > (i + 1)) {
            printf("%d ", i = i + 2);
        }

        printf("\n");
    }

    return 0;
}

// /*
//     Display all positive even numbers less than the entered integer
// */

// #include <stdio.h>

// int main(void)
// {
//     int no;
//     int i;

//     printf("Please enter an integer: ");
//     scanf("%d", &no);

//     i = 2;
//     while (i < no) {
//         printf("%d ", i);
//         i += 2;   /* move to the next even number */
//     }

//     printf("\n");

//     return 0;
// }
