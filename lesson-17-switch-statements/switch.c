#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
  char grade = 'A';

  switch (grade)
  {
  case 'A':
    printf("You did great!");
    break;
  
  case 'B':
  printf("You did Alright");
  break;

  case 'C':
  printf("You did Poorly!");
  break;

  case 'D':
  printf("You did very bad!");
  break;

  case 'F':
  printf("You Failed!");
  break;

  default:
    printf("You have an invalid grade.");
    break;
  }
  
  return 0;
}

