#include <stdio.h>

int main()
{

    int i, j, count = 0, row = 3, col = 8;

    for (i = 0; i <= row; i++)
    {
        count = 0;// when loop begin count reset to zero value

        //print space

        for (j = 0; j < (row-i); j++) // i-0, j exeute 3 times, i=1, j 2 times, i=2 j  1 time, 
        {
            
            printf(" ");
        }

        for (j = 0; j <= i; j++)
        {
            printf("%d", ++count);

        }
        count--;

        while (count)
        
            printf("%d", count--);

            printf("\n");
      
        
    }
}