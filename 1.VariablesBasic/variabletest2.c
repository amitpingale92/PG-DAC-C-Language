#include <stdio.h>

int main()
{
  int number1;
  int number2;
  int result;
  
  //number1 = 10;
  //number2 = 20;

  printf("Enter the First number\n");
  scanf("%d", &number1);

  printf("Enter the second number\n");
  scanf("%d", &number2);
  
  result = number1 + number2;
  printf("Result is : %d", result);

  return 0;
}

