#include<stdio.h>
#include<stdlib.h>
#define SQUARE(n) n*n //enclose n*n within a braces Like (n*n)

int main()
{
    int j;
    j = 64/SQUARE(4);
    printf("j = %d",j);

    return 0;
}

