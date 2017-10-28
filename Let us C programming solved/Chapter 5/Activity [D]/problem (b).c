#include<stdio.h>
#include<stdlib.h>


int main()
{
    int a,b,p;

    printf("\nEnter a and b: ");
    scanf("%d %d",&a,&b);
    p = pw(a,b);
    printf("\nPower value of given input = %d\n",p);
}
pw(int x,int y)
{
    int i,q;
    q = x;
    for(i=1;i<=y-1;i++)
        q = q*x;
    return (q);
}



