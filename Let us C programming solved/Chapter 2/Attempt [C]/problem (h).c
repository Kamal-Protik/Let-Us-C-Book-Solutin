#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y;
    printf("Enter an integer : ");
    scanf("%d",&x);
    y = -x;
    if(x>=0)
        printf("\nThe absolute value of the integer is : %d\n",x);
    if(x<0)
        printf("\nThe absolute value of the integer is : %d\n",y);
    return 0;
}

