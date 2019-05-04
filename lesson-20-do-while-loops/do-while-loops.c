#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
  
  int index = 1;
 
 // DO WHILE is different from a while loop in that it will execute to block of code BEFORE it checks the condition.
  
  do
  {
    printf("%d\n", index);
    index++;
  }while (index <= 5);

  printf("\nPRINT THIS LINE\n");

  return 0;
}

