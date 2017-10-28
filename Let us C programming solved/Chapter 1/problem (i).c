#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

int main()
{
    int a[MAX],i,n,sum;

    printf("Enter How many numbers: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nInputed elements are: \n\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    sum = a[1] + a[n];
    printf("\n\nThe sum of 1st element and last element is : %d\n",sum);
    return 0;
}

