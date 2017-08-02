#include <stdio.h>

double values[] = {11.1, 22.2, 33.3, 44.4, 55.5, 66.6, 77.7, 88.8};
//double* values = &values[0];

int main(void)
{
	double* p = values;
	double* q = p + 3;

	printf("%u has value = %.2lf\n", p, *p);
	printf("%u has value = %.2lf\n", q, *q);
	printf("%u has value = %.2lf\n", q, q[-2]);
}

