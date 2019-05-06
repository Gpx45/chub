#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{

    int nums[3][2] = 
    {
        {1,2},
        {3,4},
        {5,6}
    };
    
    //printf("%d", nums[0][0]);

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d, ", nums[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
