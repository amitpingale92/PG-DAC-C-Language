#include <stdio.h>
#include <math.h>
//function Declaration

double GetInterest(double, float, short int);
double GetCInterest(double, float, short int);
//function definition

double GetInterest(double p, float r, short int n)
{
 double interest;

 interest = (p * r * n) / 100;

 return interest;

}

double GetCInterest(double p, float r, short int n)
{
 double interest;
 double amt;

 amt = p * pow ((1+ r/100), n);

 interest = amt - p;

 return interest;

}


int main()
{
 double principle;
 float rate;
 short int period;
 double sinterest;
 double cinterest;
 printf("Enter Principle / Rate / Period\n");
 scanf("%lf %f %hd", &principle, &rate, &period);

 sinterest = GetInterest(principle, rate, period);
 cinterest = GetCInterest(principle, rate, period);

 printf("Calculated Interest is %lf\n", GetInterest(principle, rate, period));
 printf("Calculated Compound Interest is %lf\n", GetCInterest(principle, rate, period));

 return 0;

}
