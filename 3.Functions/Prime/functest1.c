#include <stdio.h>

extern int CountPrime(long, long);

int main(void)
{
	long low = 0, high = 0;
	int count;

	printf("Enter low and high: ");
	scanf("%ld%ld", &low, &high);

	count = CountPrime(low, high);

	printf("Number of primes in the range = %d\n", count);
}


