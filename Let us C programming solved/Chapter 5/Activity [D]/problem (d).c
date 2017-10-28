#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;

    printf("\nEnter a year: ");
    scanf("%d",&a);
    leap(a);
}
leap(int x)
{
    if(x%4==0)
        printf("\n%d is leap year.\n",x);
    else
        printf("\n%d is not leap year.\n",x);
}

