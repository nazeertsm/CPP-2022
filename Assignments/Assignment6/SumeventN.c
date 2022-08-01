// 1. Write a program to calculate sum of first N natural numbers
#include <stdio.h>

int main()
{

    int n1 = 12, k1 = 0;
    /*Method -1*/
    for (int i = 0; i <= n1; i = i + 2)
    {

        k1 = k1 + i;
    }

    printf("%d\n", k1);

    /*Method -2*/
    int n2 = 12, k2 = 0;

    for (int j = 0; j <= n2; j++)
    {

        if (j % 2 == 0)
        {

            k2 = k2 + j;
        }
    }

    printf("%d", k2);
}