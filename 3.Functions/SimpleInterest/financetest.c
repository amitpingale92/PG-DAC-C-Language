#include <stdio.h>
#include "finance.h"


int main()
{
  double principle, rate;
  int period;
  double interest;
  printf("Enter Principle / Rate / Period\n");
  scanf("%lf %lf %d", &principle, &rate, &period);

  interest = GetInterest(principle, rate, period);
  printf("Calculated Interest is %lf\n", interest);

  return 0;

}
