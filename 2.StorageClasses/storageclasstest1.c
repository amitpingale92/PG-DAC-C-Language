#include <stdio.h>

void Counter()
{  
   static int count = 2;
   count = count + 1;     
   printf("Count := %d\n", count);
}


int main()
{
  int num1;  // automatic storage class // will be allocated on stack
	     // They will have garbage value // they should be initialised
  Counter();
  Counter();
    printf("count = %d\n", count);
  return 0;
}



