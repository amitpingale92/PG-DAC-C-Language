#include <stdio.h>

/*
void Swap(long* first, long* second)
{
	long third = *first;
	*first = *second;
	*second = third;
}

void Swapd(double* first, double* second)
{
	double third = *first;
	*first = *second;
	*second = third;
}
*/

void Swap(void* first, void* second, int sz)
{
	char* pf = first;
	char* ps = second;

	register int i;
	char t;

	for(i = 0; i < sz; i++)
	{
		t = pf[i];
		pf[i] = ps[i];
		ps[i] = t;
	}
}

#define Swap(X, Y) Swap(&X, &Y, sizeof(X))
int main(void)
{
	long lx = 23, ly = 45;
	double dx = 62.0, dy = 14.0;

	printf("Original long values of lx = %ld and ly = %ld\n", lx, ly);
	// Swap(&lx, &ly, sizeof(long));
	Swap(lx, ly);
	printf("Swapped long values of lx = %ld and ly = %ld\n", lx, ly);

	printf("Original double values of dx = %.2lf and dy = %.2lf\n", dx, dy);
	// Swap(&dx, &dy, sizeof(double));
	Swap(dx, dy);
	printf("Swapped double values of dx = %.2lf and dy = %.2lf\n", dx, dy);
}




