#include "recursive_fact.h"

int recursive_fact(int n)
{
    if(n<0) return -1;
    if(n==0) return 1;
    return n*fact(n-1);

}
