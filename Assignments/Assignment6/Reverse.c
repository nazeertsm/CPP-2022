// 10. Write a program to reverse a given number
#include <stdio.h>
int main()
{

    int n, reverse = 0, remainder;
    printf("Enter a number");
    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 10;
        n = n / 10;

        reverse = reverse * 10 + remainder;
    }

    printf("%d", reverse);
}