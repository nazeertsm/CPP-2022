//5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.

#include <stdio.h>

int main()
{

    int i, Max = 0, position, smallestNum;

    int num[10];
    printf("Enter 10 numbers\n");

     for (int i = 0; i < 9; i++)

        scanf("%d", &num[i]);
    
    smallestNum = num[0];

    for (i = 1; i < 9; i++)
    {

        if (smallestNum > num[i])
        {
            smallestNum = num[i];
            
        }
        
    }

    printf("smallest number is %d\n", smallestNum);
    
}