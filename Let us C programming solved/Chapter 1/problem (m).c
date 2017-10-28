#include<stdio.h>
#include<stdlib.h>
#define MAX 100000

int main()
{
    int n,i,a[MAX],output_number,add;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("\nInput the numbers: ");
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nHow much you want to add of each numbers: ");
    scanf("%d",&add);
    for(i=1;i<=n;i++){
        a[i] = a[i] + add;
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}

