#include <stdio.h>

int main()
{
  int marks;

  printf("Welcome to Students Evaluation System\n");
  printf("Enter the marks of the student for Evaluation\n");

  scanf("%d", &marks);

  if (marks >= 75)
  	printf("Congratulations , Secured Distinction\n");
  else if (marks >=60)
  	  printf("Congratulations , Secured First Class\n");
  else if (marks >=50)
  	  printf("Congratulations , Secured Second Class\n");
  else if (marks >=40)
          printf("Congratulations , Pass Class\n");
  else
  	printf("Failed Try Again\n");


  return 0;

}
