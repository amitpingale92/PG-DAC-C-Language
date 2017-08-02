#include <stdio.h>

struct Student
{
	long id;
	short course;
};

int main(void)
{
	struct Student jack = {31, 43};
	struct Student jill;
	jill.course = 57;
	jill.id = 20;
	
	printf("Student with id %ld has enrolled for course number %hd\n", jack.id, jack.course);
	printf("Student with id %ld has enrolled for course number %hd\n", jill.id, jill.course);

	return sizeof(jack);
}













