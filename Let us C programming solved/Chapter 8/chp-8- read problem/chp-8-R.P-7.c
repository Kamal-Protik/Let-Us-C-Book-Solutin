#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i = 3,*x;
    float j = 1.5,*y;
    char k = 'c',*z;

    printf("\nValue of i = %d",i);
    printf("\nValue of j = %f",j);
    printf("\nValue of k = %c",k);

    x = &i;
    y = &j;
    z = &k;

    printf("\nOriginal address of x = %u",x);
    printf("\nOriginal address of y = %u",y);
    printf("\nOriginal address of z = %u",z);

    x--;
    y--;
    z--;

    printf("\nNew address of x = %u",x);
    printf("\nNew address of y = %u",y);
    printf("\nNew address of z = %u",z);
}

