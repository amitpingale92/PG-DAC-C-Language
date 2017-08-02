#include <stdio.h>

enum RoomType {Economy=1, Business, Executive, Deluxe};

double GetPayment(short stay, enum RoomType room)
{
	double payment = 0;
	float rate = 0;

	switch(room)
	{
	case Economy:
			rate = 850;
			break;
	case Business:
			rate = 950;
			break;
	case Executive:
			rate = 1200;
			break;
	default:
			rate = 1500;
	}

	payment = stay * rate * 1.12;

	return payment;
}

int main(void)
{
	short days;
	
	printf("Number of days: ");
	scanf("%hd", &days);

	printf("Payment for Economy = %.2lf\n", GetPayment(days, Economy));
	printf("Payment for Business = %.2lf\n", GetPayment(days, Business));
	printf("Payment for Executive = %.2lf\n", GetPayment(days, Executive));
	printf("Payment for Deluxe = %.2lf\n", GetPayment(days, Deluxe));
}














