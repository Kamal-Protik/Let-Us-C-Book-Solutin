#include <stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,sum;
    printf("\nEnter the Numbers of a b and c: ");
    scanf("%d %d %d",&a,&b,&c);

    sum = calsum(a,b,c);
    printf("\nThe sum of a b and c is %d\n",sum);
}
calsum(int x,int y,int z)
{
    int d;
    d = x+y+z;
    return(d);
}




