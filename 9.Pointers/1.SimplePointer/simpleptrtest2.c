#include <stdio.h>

double Average(double first, double second, double* d)
{
	*d = first > second ? (first - second) / 2 : (second - first) / 2;
	return (first + second) / 2;
}

int main(void)
{
	double f = 0, s = 0, a = 0, d = 0;

	printf("Enter first and second: ");
	scanf("%lf%lf", &f, &s);

	a = Average(f, s, &d);

	printf("Average of %.2lf and %.2lf is %.2lf and deviation is %.2lf\n", f, s, a, d);
}








