//Write a recursive function to calculate sum of squares of first n natural numbers
#include <stdio.h>

int sum(int);

int main()
{
    int k;
    k = sum(4);
    printf("%d", k);
}

int sum(int n)
{
    int s;
    if (n == 1)
        return 1;
     s = n*n + sum(n - 1);
     return s;
}
