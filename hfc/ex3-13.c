/* 
    Display the season for a given month 
*/

#include <stdio.h>

int main(void)
{
    int month;

    printf("Please enter a month: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1 :
    case 2 :
    case 12 : printf("Month %d is in winter.\n", month);
        break;
    case 3 :
    case 4 :
    case 5 : printf("Month %d is in Spring.\n", month);
        break;
    case 6 :
    case 7 :
    case 8 : printf("%d is in summer.\n", month);
        break;
    case 9:
    case 10:
    case 11: printf("%d is in autumn.\n", month);
        break;
    default: puts("This is not a valid month!"); 
        break;
    }

    return 0;
}
