#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n,num,oct=0,rem,i=1;
    printf("Enter an integer: ");
    scanf("%d",&num);
    n=num;

    while(n!=0)
    {
        rem=n%8;
        oct =oct +(rem*i);
        i*=10;
        n=n/8;
    }
    printf("\nThe octal number of %d = %d\n",num,oct);
    return 0;
}
