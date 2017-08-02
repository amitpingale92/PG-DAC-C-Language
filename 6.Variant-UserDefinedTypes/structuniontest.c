#include <stdio.h>

struct Student
{
	long id;
	short course;
	union
	{
		long marks;
		char grade;
	};
};

void PrintResult(struct Student entry)
{
	if((entry.id % 2) == 0)
		printf("Student with id %ld has grade %c\n", entry.id, entry.grade);
	else
		printf("Student with id %ld has marks %ld\n", entry.id, entry.marks);
}

int main(void)
{
	struct Student jack = {31, 43, 60};
	struct Student jill = {20, 57, 'A'};

	PrintResult(jack);
	PrintResult(jill);

	return sizeof(jack);
}













