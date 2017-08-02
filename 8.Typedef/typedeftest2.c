#include "box.h"
#include <stdio.h>

int main(void)
{
	long l = 0, b = 0, h = 0, t = 0, a = 0, v = 0;
	Box box;

	printf("Enter box dimensions: ");
	scanf("%ld%ld%ld", &l, &b, &h);

	printf("Enter box thickness: ");
	scanf("%ld", &t);

	BoxSetDimension(box, l, b, h);
	BoxSetThickness(box, t);
	a = BoxGetArea(box);
	v = BoxGetVolume(box);

	printf("Box area = %ld and volume = %ld\n", a, v);
}













