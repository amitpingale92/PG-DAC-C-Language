#include <stdio.h>

long AddAll(long low, long limit)
{
	register long entry;
	long total = 0;

	for(entry = low; entry <= limit; entry++)
	{
		total += entry;
	}

	return total;
}

/*
long AddOdd(long low, long limit)
{
	register long entry;
	long total = 0;

	for(entry = low; entry <= limit; entry++)
	{
		if((entry % 2) == 1)
			total += entry;
	}

	return total;
}
*/

long AddIf(long low, long limit, int (*allowed)(long)) 
{
	register long entry;
	long total = 0;

	for(entry = low; entry <= limit; entry++)
	{
		if(allowed(entry)) 
			total += entry;
	}

	return total;
}

int IsOdd(long value)
{
	return value & 1;
}

int IsEven(long value)
{
	return (value % 2) == 0;
}

int main(void)
{
	long limit = 0, sum = 0;

	printf("Enter a positive integer: ");
	scanf("%ld", &limit);

	sum = AddAll(1, limit);
	printf("Sum of all integers for limit %ld = %ld\n", limit, sum);

	//sum = AddOdd(1, limit);
	sum = AddIf(1, limit, IsOdd);
	printf("Sum of odd integers for limit %ld = %ld\n", limit, sum);

	sum = AddIf(1, limit, IsEven);
	printf("Sum of even integers for limit %ld = %ld\n", limit, sum);
}











