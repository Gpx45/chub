#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct Student
{
  char name[50];
  char major[50];
  int age;
  double gpa;

};


int main()
{
  
  struct Student student1;
  student1.age = 22;
  student1.gpa = 3.2;
  strcpy(student1.name,"Alfred"); /* In C you cant derectly assign a string, since your essentially making an array, you must use this function.*/
  strcpy(student1.major, "Business");
  
  struct Student student2;
  student2.age = 21;
  student2.gpa = 4.3;
  strcpy(student2.name, "Jennifer");
  strcpy(student2.major, "Biology");

  printf("Students: \n");
  printf("%d \n",student1.age);
  printf("%f \n",student1.gpa);
  printf("%s \n",student1.name);
  printf("%s \n",student1.major);

  return 0;
}

