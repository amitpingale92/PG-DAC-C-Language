#include <stdio.h>

int count;  // global storage class

void Counter()
{  
   count = count + 1;     
   printf("Count := %d\n", count);
}


int main()
{
  int num1;  // automatic storage class // will be allocated on stack
	     // They will have garbage value // they should be initialised
  Counter();
  Counter();
  count = count + 1;
  printf("Count accessed from main , values is := %d\n", count);

  return 0;
}



