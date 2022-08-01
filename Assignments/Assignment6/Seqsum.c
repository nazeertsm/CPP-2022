// 4. Write a program to calculate sum of squares of first N natural numbers
#include <stdio.h>

int main()
{

    int i, k = 0, n;
    printf("Enter Numer:\n");
    scanf("%d",&n);

    while (i <= n)
    {

        k = k + i;
        i++;
    }

    printf("%d", k);
}