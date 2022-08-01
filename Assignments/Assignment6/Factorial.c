// 6. Write a program to calculate factorial of a number
#include <stdio.h>

int main()
{

    int n, i;
    printf("Enter the value:\n");
    scanf("%d", &n);

    for (i = n - 1; i >= 1; i--)

    {
        n = n * i;
    }

    printf("%d", n);
}
