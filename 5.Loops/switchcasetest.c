#include <stdio.h>

int main(void)
{
	short stay;
	int room;
	float rate;
	double payment;
	
	printf("Number of days: ");
	scanf("%hd", &stay);
	puts("1.Economy\n2.Business\n3.Executive\n4.Deluxe");
	printf("Room type (1-4): ");
	scanf("%d", &room);

	switch(room)
	{
	case 1:
			rate = 850;
			break;
	case 2:
			rate = 950;
			break;
	case 3:
			rate = 1200;
			break;
	default:
			rate = 1500;
	}

	payment = stay * rate * 1.12;

	printf("Total payment = %.2lf\n", payment);
}














