#include <stdio.h>

int main()
{
  char grade; 
  char option;

  printf("Enter the grade of Student\n");
  scanf("%c", &grade);
  
  printf("Grade is %d\n",grade); 
  printf("char requires %d bytes in memory\n", sizeof(char));
  return 0;

}
