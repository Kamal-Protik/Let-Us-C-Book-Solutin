#include<stdio.h>
#include<stdlib.h>


int main()
{
    int a,fact;

    printf("\nEnter any Number: ");
    scanf("%d",&a);
    fact = factorial(a);
    printf("\nFactorial value of %d = %d\n",a,fact);
}
factorial(int x)
{
    int f=1,i;
    for(i=1;i<=x;i++)
        f = f*i;
    return (f);
}



