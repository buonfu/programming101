/*
    Read an integer and display its value multiplied by 5.
*/

#include <stdio.h>

int main(void)
{
    int no;

    printf("Please enter an integer: ");
    scanf("%d", &no);

    printf("Multiplied by 5 it becomes: %d. \n", 5 * no);

    return 0;
}