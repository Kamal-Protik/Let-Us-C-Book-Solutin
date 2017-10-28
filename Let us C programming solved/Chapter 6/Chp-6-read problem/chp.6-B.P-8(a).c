#include<stdio.h>
#include<stdlib.h>

int main()
{
    increment();
    increment();
    increment();

    return 0;
}

increment()
{
    auto int i = 1;
    printf("%d\n",i);
    i = i+1;
}


