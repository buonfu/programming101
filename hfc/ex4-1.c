/*
    Determine the sign of the entered integer. 
*/

#include <stdio.h>

int main(void)
{
    int no;
    int retry;

    printf("Please enter an integer:");
    scanf("%d", &no);

    do
    {   if (no == 0) {
        puts("This is a 0.");                           
    }   else if (no > 0) {
        puts("This is a positive integer.");
    }   else {
        puts("This is a negative integer.");
    }
        
        printf("Continue or not? <Yes - 0/No - 9>:");
        scanf("%d",&retry);
    } while (retry == 0);
    
    return 0;
}