#include <stdio.h>
#include <math.h>
//function Declaration

double principle;
float rate;
short int period;

double GetInterest();

//function definition

double GetInterest()
{
 double interest;

 interest = (principle * rate * period) / 100;

 return interest;

}


int main()
{
 double sinterest;
 printf("Enter Principle / Rate / Period\n");
 scanf("%lf %f %hd", &principle, &rate, &period);

 sinterest = GetInterest();

 printf("Calculated Interest is %lf\n", sinterest);

 return 0;

}
