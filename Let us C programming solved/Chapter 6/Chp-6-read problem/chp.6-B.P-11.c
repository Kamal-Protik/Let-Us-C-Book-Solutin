#include<stdio.h>
#include<stdlib.h>

int x = 21;
int main()
{
    extern int y;
    printf("\n%d %d",x,y);
}
int y = 31;


