#include <stdio.h>

long outer = 0;
long inner = 0;
long frame = 0;

int main(void)
{
	printf("Enter outer and inner widths: ");
	scanf("%ld%ld", &outer, &inner);

	frame = outer * outer - inner * inner;

	printf("Frame area = %ld\n", frame);
}










