/* 
    Display the season for a given month 
13*/

#include <stdio.h>

int main(void)
{
    int month;   /* month */

    printf("Please enter a month: ");
    scanf("%d", &month);

    if (month >= 3 && month <= 5)
        printf("Month %d is in spring.\n", month);      /* AND */
    else if (month >= 6 && month <= 8)
        printf("Month %d is in summer.\n", month);
    else if (month >= 9 && month <= 11)
        printf("Month %d is in autumn.\n", month);
    else if (month == 1 || month == 2 || month == 12)
        printf("Month %d is in winter.\n", month);      /* OR */
    else
        printf("%d is not a valid month!\a\n", month);

    return 0;
}
