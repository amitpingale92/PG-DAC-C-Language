#include <stdio.h>

struct Employee
{
	long id;
	short hours;
	float rate;
};

typedef struct Employee Emp;

void EmployeeInit(Emp* emp, short h, float r)
{
	static long count = 0;

	emp->id = 101 + count++;
	emp->hours = h;
	emp->rate = r;
}

double GetNetIncome(const Emp* emp) 
{
	double income = emp->hours * emp->rate;
	int ot = emp->hours - 180;

	if(ot > 0)
		income += 50 * ot;

	return income;
}

int main(void)
{
	Emp jack;
	Emp jill;
	
	EmployeeInit(&jack, 180, 100);
	EmployeeInit(&jill, 190, 100);

	printf("Jack's id = %ld and income = %.2lf\n", jack.id, GetNetIncome(&jack));
	printf("Jill's id = %ld and income = %.2lf\n", jill.id, GetNetIncome(&jill));
}














