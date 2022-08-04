// 1. Write a program to calculate the sum of numbers stored in an array of size 10.
// Take array values from the user.

#include <stdio.h>

int main()
{

    int num[10], i, sum = 0;
    printf("Enter 10 numbers\n");

    for (int i = 0; i < 9; i++)

        scanf("%d", &num[i]);

    for (i = 0; i < 9; i++)
    {
        sum = sum + num[i];
    }

    printf("\n numbers stored in an array of size 10: %d", sum);
 
    printf("\n");

    return 0;
}