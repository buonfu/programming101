/*
	User enters own name and the program asks his\her name then greets.
    Copied from the presentation.
    https://github.com/buonfu/programming101.git
*/

#include <stdio.h>

int main()
{
    char str[100];
    puts("What's your name?");
    scanf("%s", str);   
    printf("Hello, %s!\n", str);
    return 0;
}


// #include <stdio.h>

// int main()
// {	char str[100] = {0};
//  	puts("What's your name?");
//  	fgets(str, 100, stdin);
//  	printf("Hello, %s!\n", str);

// 	return 0;
// }

// Terminal output:
// What's your name?
// Xika
// Hello, Xika
// !


// #include <stdio.h>
// #define SIZE 100

// int main()
// {	char str[SIZE] = {0};
//  	puts("What's your name?");
//  	fgets(str, SIZE, stdin);
//  	printf("Hello, %s!\n", str);

// 	return 0;
// }

