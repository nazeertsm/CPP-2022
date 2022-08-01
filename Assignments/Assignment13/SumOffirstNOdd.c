// Write a recursive function to calculate sum of first N odd natural numbers
#include <stdio.h>

int sum(int);

int main()
{
    int k;
    k = sum(10);
    printf("%d", k);
}

int sum(int n)
{
    int s;
    if (n == 1)
        return 1;
    if (n % 2 != 0)
      s = n + sum(n - 1);
    else
     s = 0 + sum(n - 1);
    return s;
}
