/*
	Given two entered value: radius and height, calculate the volume of cylinder.
	(radius and height need to be divided by a space.
    Based on notes/01.01 Basics_of_C
    https://github.com/buonfu/programming101.git
*/

#include <stdio.h>

int main()
{	double r, h;
    double v;

// 	printf("Please enter the radius and height of cylinder: ");
 	scanf("%lf %lf", &r, &h);

    v = 3.14 * r * r * h;

//  printf("The volume of cylinder is: ");
    printf("%.6f\n", v);

	return 0;
}