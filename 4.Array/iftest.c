#include <stdio.h>

long array[] = {111, 222, 333, 444, 555, 666, 777, 888};

int main(void)
{
	int index;
	long value;

	printf("Enter index (0-7): ");
	scanf("%d", &index);

	if(index <= 7)
	{
		value = array[index];
		printf("Value = %ld\n", value);
	} 

	puts("Goodbye.");
}










