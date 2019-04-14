#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 
  const int NUM = 5;
  printf("%d", NUM);

  NUM = 8;
  printf("%d", NUM);
  
  /*This will not be compiled and will throw an error due
  to the var num being set as a const.*/
  
  return 0;
}
