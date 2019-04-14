#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 
  
  int age;
  printf("Enter age: ");
  scanf("%d", &age); /*The scanf function takes input from the
  input device, typically keyboard, by specifiying a pointer
  '&age' is a pointer. and storing the value input in the var
  'age '*/

  printf("You are %d years old", age);
 
  double gpa;
  printf("\nEnter GPA: ");
  scanf("%lf", &gpa);
  printf("Your GPA is: %f", gpa);

  /* For the following code to function the top must  be
  commented.

  char name[20];
  printf("\nEnter your name "); /*printf stores up to the first new line so it wont pick up anything else.*/
  // fgets(name, 20, stdin);
  
  // printf("Your name is %s", name);
 
  return 0;
}

