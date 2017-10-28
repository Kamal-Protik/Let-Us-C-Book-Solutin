#include<stdio.h>
#include<stdlib.h>

int main()
{
    int fact,a;

    printf("Enter any Number : ");
    scanf("%d",&a);

    fact = rec(a);
    printf("Factorial value of %d is %d",a,fact);
}
rec(int x)
{
    int f;
    if(x==1)
        return(1);
    else
        f = x*rec(x-1);
        return (f);
}

