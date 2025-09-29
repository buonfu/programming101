/*
    Determine the sign of the integer inputed. 
*/

#include <stdio.h>

int main(void)
{
    int no;

    printf("Please enter an integer: ");
    scanf("%d", &no);

    if (no == 0)
        puts("The integer is 0.");
    else if (no > 0)
        puts("The integer is positive.");
    else if (no < 0)
        puts("The integer is negative.");

    return 0;
}
