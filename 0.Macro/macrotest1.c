#include "mymacro.h"
#include <stdio.h>

int main(void)
{
	float s = 0, c = 0, n = 0;
	
	printf("Enter a real value: ");
	scanf("%f", &n);

	s = SQUARE(n);
	c = CUBE(n);

	printf("Square = %f and cube = %f\n", s, c);
}










