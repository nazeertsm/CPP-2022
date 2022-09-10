#include <stdio.h>
int factorial(int);
int main()
{
    int num;
    scanf("%d", &num); // Reading input from STDIN
    printf("Input number is %d.\n", num);

    int result = factorial(num);
    printf("result is %d.\n", result);

    // Writing output to STDOUT
}
    int factorial(num)
    {

        if (num == 1)
        {

            return 1;
        }

        int fact = num * factorial(num - 1);

        return fact;
    }
