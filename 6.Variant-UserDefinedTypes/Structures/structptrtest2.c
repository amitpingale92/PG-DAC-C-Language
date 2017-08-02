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

typedef struct Manager{
	long id;
	short hours;
	float rate;
	long secid;
}Mgr;

/*
void ManagerInit(Mgr* emp, short h, float r)
{
	static long count = 0;

	emp->id = 101 + count++;
	emp->hours = h;
	emp->rate = r;
}

double MgrGetNetIncome(const Mgr* emp) 
{
	double income = emp->hours * emp->rate;
	int ot = emp->hours - 180;

	if(ot > 0)
		income += 50 * ot;

	return income;
}
*/

int main(void)
{
	Emp jack;
	Mgr jill;
	
	EmployeeInit(&jack, 180, 100);
	//ManagerInit(&jill, 190, 100);
	EmployeeInit((Emp*)&jill, 190, 100);
	jill.secid = 501;

	printf("Jack's id = %ld and income = %.2lf\n", jack.id, GetNetIncome(&jack));
	printf("Jill's id = %ld and income = %.2lf\n", jill.id, GetNetIncome((Emp*)&jill));
}














