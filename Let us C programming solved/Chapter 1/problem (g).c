#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,sum,i,j;
    printf("How many numbers : ");
    scanf("%d",&n);
    sum = 0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&j);
        sum = sum + j;
    }
    printf("\nSo the total sum of inputed numbers is %d\n",sum);
    return 0;
}

