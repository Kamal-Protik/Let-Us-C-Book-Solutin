#include<stdio.h>
#include<stdlib.h>

int i;
int main()
{
    printf("\ni = %d",i);

    increment();
    increment();
    decrement();
    decrement();

    return 0;
}

increment()
{
    i = i+1;
    printf("\non incrementing i = %d",i);
}

decrement()
{
    i = i-1;
    printf("\non decrementing i = %d",i);
}


