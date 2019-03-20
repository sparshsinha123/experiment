#include "sub.h"

int sub(int a, int b)
{
    int diff;
    diff = a>b?a-b:b-a;
    return diff;
}
