#include<stdio.h>
#include<stdlib.h>

#pragma warn -rvl
#pragma warn -par
#pragma warn -rch

int f1()
{
    int a=5;
}

void f2(int x)
{
    printf("\nInside f2");
}

int f3()
{
    int x = 6;
    return x;
    x++;
}

void main()
{
    f1();
    f2(7);
    f3();
}

