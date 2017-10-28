#include<stdio.h>
#include<stdlib.h>
#define AREA(x) (3.14*x*x)

int main()
{
    float r1 = 6.25,r2 = 2.5,a;

    a = AREA(r1);
    printf("\nArea of circle = %f",a);
    a = AREA(r2);
    printf("\nArea of circle = %f",a);

    return 0;
}

