// 2. Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.
#include <stdio.h>

int main()
{
    int i, num[10];
   float avg, sum = 0;

    printf("Enter 10 numbes\n");

    for (i = 0; i < 9; i++)
    {

        scanf("%d", &num[i]);

    }


    for (i = 0; i < 9; i++)
    {
        sum=sum+num[i];

    }
   //printf("the total of 10 numbers %f\n ", sum);
    avg = (float)(sum/10);
  //%.2f is used for displaying output upto two decimal places
    printf("the average of 10 numbers %.2f", avg);
}
