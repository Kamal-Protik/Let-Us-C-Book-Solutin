#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *j;
    int *fun();
    j = fun();
    printf("\n%d",*j);

    return 0;
}

int *fun()
{
    int k = 35;
    return (&k);
}


