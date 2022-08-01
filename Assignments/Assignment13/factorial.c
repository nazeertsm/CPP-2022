//6. Write a recursive function to calculate factorial of a given number
#include<stdio.h>

    factorial(int);
int main(){

int n, k;
    k=factorial(5);

    printf("%d", k);

}



factorial(n){

int s;
    if(n==1){

        return 1;
    }
    
    s=n*factorial(n-1);

    return s;

}
