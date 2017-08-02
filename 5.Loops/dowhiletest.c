#include <stdio.h>

int main(void)
{
	long number;
	long a, b;
	int c, d;

	printf("Enter a positive integer: ");
	scanf("%ld", &number);

	a = 1;
	b = number;
	c = 0;

	do
	{
		a = a * 10;
		c++;
	}while(a <= b);
	
	d = c;

	printf("Number of digits = %d\n", d);
}













