//Write a recursive function to calculate sum of first N natural numbers
#include <stdio.h>

int sum(int);

int main()
{

    int k;

    k = sum(5);

    printf("%d", k);
}

int sum(int n)
{
    int s;
    if (n == 1)
        return 1;
    s = n + sum(n - 1);

    return s;
}