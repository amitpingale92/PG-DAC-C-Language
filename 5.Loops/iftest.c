#include <stdio.h>

int main()
{
  double principle;
  double rate;
  printf("Enter the Amount to be invested in FD\n");
  scanf("%lf", &principle);

  if (principle < 100000)
  {
	rate = 8;
  }
  else
  {
	rate = 10;
  }
  
  printf("Rate for your FD is %lf\n", rate);
  
  return 0;

}
