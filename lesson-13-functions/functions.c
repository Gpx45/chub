#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sayHi(); // You should explicitly declare functions
              // Before your main. These declarations are called
              // 'Prototypes'

int main()
{

  sayHi("Amanda", 15);


  return 0;
}

void sayHi(char name[], int age)
{
  printf("Hello %s, you are %d years old!", name, age);

}
