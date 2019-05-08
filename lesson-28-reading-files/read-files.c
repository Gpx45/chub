#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    char line[255];

    FILE *fpointer = fopen("employees.txt", "r");

    fgets(line, 255, fpointer); // This will print out the first line of the file.
    fgets(line, 255, fpointer); // This will print out the second line of the file.

    printf("%s", line); 
    

    return 0;
}
