#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

int main()
{
    int a[MAX],i,n;

    printf("Enter How many numbers: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nIn normal mood: \n\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\nIn reverse mood: \n\n");
    for(i=n;i>=1;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
