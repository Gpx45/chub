#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{

    int age = 30;
    int *pAge = &age;  // This is storing the memory address of the variable age, This is a pointer. It is a type of data that store the physical memory address of another var.
    double gpa = 3.4;
    double *pGpa = &gpa;    // Notice that the set datatype of the pointer is same datatype of the variable whose memory address your storing.
    char grade = 'A';
    char *pGrade = &grade;

    printf("age's memory address: %p\n", &age);
    printf("age's physical memory address: %p\n", pAge); // Pointer variable that prints out the memory address of age
    printf("age's physical memory address: %d\n", *pAge); // dereferencing the pointer var for the variable age (This will bring the value of the var age)
    printf("age's physical memory address: %p\n", &age); // This is a pointer to the age var. 
    printf("age's physical memory address: %d\n", *&age); // This is dereferenceing the pointer (Will bring back the actual value of age variable.)
    printf("age's physical memory address: %p\n", &*&age); // You keeping referencing and dereferencing pointers to either get their value or


    return 0;
}
