#include "factorial.h"

int factorial(int n)
{
    int fact = 1;
    while(n>0)
    {
        fact = fact *n;
        n--;
    }
    return fact;
}

int exp_p(int n , int p){
    int e = 0;
    int temp = n;
    while(temp){
        e += temp / p;
        temp = temp / p;
    }
    return p;
}