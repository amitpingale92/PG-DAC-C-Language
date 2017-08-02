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

	if(room == 1)
		rate = 850;
	else if(room == 2)
		rate = 950;
	else if(room == 3)
		rate = 1200;
	else
		rate = 1500;
	
	payment = stay * rate * 1.12;

	printf("Total payment = %.2lf\n", payment);
}














