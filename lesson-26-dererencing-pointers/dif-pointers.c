#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{

    int age = 30;
    int *pAge = &age;

    printf("%p : age \n", pAge);

    // When you are dereferencing a pointer, were going to the physical address and obtaining the data that actually inside the address you were referenceing.

    printf("%d", *pAge);


    return 0;
}
