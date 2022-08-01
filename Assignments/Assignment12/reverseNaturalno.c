// 2. Write a recursive function to print first N natural numbers in reverse order
#include <stdio.h>

int PrintRev(int);
int main()
{
    int k;

    k = PrintRev(6);

    //printf("%d", k);
}

int s, k;
int PrintRev(int n)
{

    if (n == 0)
        return -1;

    s= printf(" %d", n), PrintRev(n-1);

    return s;
}

//not completed