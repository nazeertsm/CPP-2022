// 4. Write a program to find the greatest number stored in an array of size 10.
// Take array values from the user.
#include <stdio.h>

int main()
{

    int i, Max = 0, position, greatestNum;

    int num[10];
    printf("Enter 10 numbers\n");

     for (int i = 0; i < 9; i++)

        scanf("%d", &num[i]);
    
    greatestNum = num[0];

    for (i = 1; i < 9; i++)
    {

        if (greatestNum < num[i])
        {
            greatestNum = num[i];
            
        }
        
    }

    printf("greatest number is %d\n", greatestNum);
    
}