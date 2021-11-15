
#include "swap.h"

swap::swap(int x, int y)
{
    a=x; 
    b=y;
}

void swap::doit()
{
    int i;
    i=a;
    a=b;
    b=i;
    printf("a= %d  b= %d\n",a,b);
}

swap::~swap()
{
}
