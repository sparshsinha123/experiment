#include "recursive_fact.h"

int recursive_fact(int n)
{
    if(n==0) return 1;
    else return n*fact(n-1);

}
