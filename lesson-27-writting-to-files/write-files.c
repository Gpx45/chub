#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{

   
    FILE *fpointer = fopen("employees.txt", "a"); // creating a file with the mode (write) "w" (read) "r" (append) "a"

    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");
    fprintf(fpointer, "\nAnn Office Slut.");
    // If you use another fprintf you will overwrite what you previously write in the file BECAUSE the file mode was (write) so you need to set it with an "a" for append mode.

    
    fclose(fpointer);
    

    return 0;
}
