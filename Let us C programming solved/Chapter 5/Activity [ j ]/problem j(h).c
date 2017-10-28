#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b;

    printf("Enter a decimal integer: ");
    scanf("%d",&a);

    b = bin(a);
    printf("\nBinary Equivalent of %d = %d\n",a,b);
}
bin(int j)
{
    if(j==0)
        return 0;
    else
        return (j%2) + 10 * bin(j/2);
}

