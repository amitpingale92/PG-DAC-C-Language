#include <stdio.h>

int main(void)
{
	register int i;
	long limit = 0, total = 0;

	printf("Enter limit: ");
	scanf("%ld", &limit);
	
	for(i = 0; i < limit; i++)
	{
		total += i;		// total = total + i
	}

	printf("Total = %ld\n", total);
}







