#include <stdio.h>
#include<stdlib.h>

int main()
{
    int a=10,b=20;

    swap(&a,&b);
    printf("\na = %d b = %d",a,b);
}
swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("x = %d y = %d",*x,*y);

}

