#include "finance.h"

double GetInterest(double p, float r, short int n)
{
  double interest;

  interest = (p * r * n) / 100;

  return interest;

}
