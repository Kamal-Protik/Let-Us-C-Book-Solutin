#include<stdio.h>
#include<stdlib.h>
#define Condition1 (a>b)
#define Condition2 (a<b)

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    if(Condition1)
        printf("\nBigger of these two number is %d\n",a);
    else if(Condition2)
        printf("\nBigger of these two number is %d.\n",b);

    else
        printf("\nBoth are equal :) \n");

    return 0;
}

