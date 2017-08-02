#include <stdio.h>

int main(void)
{
	register int i = 0;
	long limit = 0, total = 0;

	printf("Enter limit: ");
	scanf("%ld", &limit);
	
	while(i < limit)
	{
		total += i;		// total = total + i

		i++;	
	}

	printf("Total = %ld\n", total);
}







