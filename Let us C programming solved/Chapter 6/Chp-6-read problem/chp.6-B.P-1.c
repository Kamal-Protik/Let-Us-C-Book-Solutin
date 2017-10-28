#include<stdio.h>
#include<stdlib.h>


int main()
{
    char ch = 291;
    printf("\n%d %c",ch,ch); // (0,1,2...127...-128,-127,-126...0)...(291-128 = 163 and 163-128 = 35)
    return 0;
}

