#include "box.h"
#include <stdio.h>

int main(void)
{
	long l = 0, b = 0, h = 0, a = 0, v = 0;

	printf("Enter box dimensions: ");
	scanf("%ld%ld%ld", &l, &b, &h);

	a = BoxGetArea(l, b, h);
	v = BoxGetVolume(l, b, h);

	printf("Box area = %ld and volume = %ld\n", a, v);
}













