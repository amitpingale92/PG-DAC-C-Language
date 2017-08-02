#include "box.h"
#include <stdio.h>

int main(void)
{
	long l = 0, b = 0, h = 0, a = 0, v = 0;
	Box box;

	printf("Enter box dimensions: ");
	scanf("%ld%ld%ld", &l, &b, &h);

	BoxSetDimension(box, l, b, h);
	a = BoxGetArea(box);
	v = BoxGetVolume(box);

	printf("Box area = %ld and volume = %ld\n", a, v);
}













