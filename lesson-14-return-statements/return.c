#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cube(double num);

int main()
{

printf("Answer: %f",cube(5));

  return 0;
}

double cube(double num)
{
double result = num * num * num;
return result;
}