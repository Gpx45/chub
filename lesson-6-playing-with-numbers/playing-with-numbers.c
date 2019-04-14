#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 
 printf("%f", 8.9);
 printf("%f", 5.0 + 7.4);

 /*Working with different types of number will determine
   the anwser you get back*/

   /*%f is a decimal format specifier and it'll display certain
   types of data depending on what numbers are given.*/

   printf("%f \n", 5 + 4);
   /*The above line with return a decimal*/

   printf("%f \n", 5.0, 6);
   /*The above line with return a decimal*/

    printf("%d \n", 5 + 4);
   /*The above line with return a integer*/

    printf("%f \n", pow(2, 3));

    printf("%f \n", sqrt(64));
    printf("%f \n", ceil(36.356)); /*rounds a number up*/
    printf("%f \n", floor(36.356)); /*rounds a number down*/

    return 0;
}
