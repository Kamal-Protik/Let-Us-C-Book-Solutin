#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y,z;

    printf("\nEnter Values of X,Y,Z: ");
    scanf("%d %d %d",&x,&y,&z);

    printf("\nBefore Circular Shift X=%d Y=%d and Z=%d",x,y,z);

    cirswap(&x,&y,&z);
    printf("\nAfter Circular Shift X=%d Y=%d and Z=%d\n",x,y,z);
}
cirswap(int *a,int *b,int *c)
{
    int temp;
    temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}


