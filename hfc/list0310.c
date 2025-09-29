/*
 If the entered integer is positive, determine the parity of this integer then display the result.
*/

#include <stdio.h>

int main(void)
{
    int no;

    printf("Please enter an integer: ");
    scanf("%d", &no);

    if (no > 0)
        if  (no % 2 == 0)
            puts("This is an even integer.");
        else 
            puts("This is an odd integer.");
    else 
        puts("The integer you entered is not positive. \a");
    
    return 0;
}