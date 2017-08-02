#include <stdio.h>

union Student
{
	long marks;
	char grade;
};

int main(void)
{
	union Student jack = {97};
	union Student jill;
	jill.grade = 'A';

	printf("Grade of first student is %c\n", jack.grade);
	printf("Marks of second student is %c\n", jill.grade);

	return sizeof(jack);
}













