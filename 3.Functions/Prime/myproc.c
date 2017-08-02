static int IsPrime(long n)
{
	 int i;

	if(n == 1)
		return 0;
	
	if(n < 4)
		return 1;

	if((n & 1) == 0)
		return 0;
	
	for(i = 3; i * i <= n; i += 2)
	{
		if((n % i) == 0) return 0;
	}

	return 1;
}

int CountPrime(long low, long high)
{
	long entry;
	int count = 0;

	for(entry = low; entry <= high; entry++)
	{
		count += IsPrime(entry);
	}

	return count;
}















