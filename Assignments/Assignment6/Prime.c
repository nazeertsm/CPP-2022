// 8. Write a program to check whether a given number is a Prime number or not
#include <stdio.h>

int main()
{

    int i, n, flag = 0;

    printf("Enter a number:\n");
    scanf("%d", &n);

    for (i = 2; i < n; i++)

    {

        if (n % i == 0)
        {

            flag = 1;
        }
    }

    if (flag == 1)
    {

        printf("%d Not prime", n);
    }

    else
    {

        printf("%d is prime", n);
    }
}