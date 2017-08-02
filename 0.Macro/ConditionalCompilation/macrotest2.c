#include "mymacro.h"
#include <stdio.h>

int main(void)
{
	register int i;
	float r;
	int limit = 0;
	
	printf("Enter limit: ");
	scanf("%d", &limit);

	for(i = 1; i <= limit; ++i)
	{

		#ifdef _HIGH
			r = SQUARE(i);
		#else
			r = CUBE(i);
		#endif

		printf("%d \t %f\n", i, r);
	}
}










