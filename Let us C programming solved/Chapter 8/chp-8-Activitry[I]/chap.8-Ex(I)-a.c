#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[5],b[5];
    int i,j=4;

    for(i=0;i<=4;i++)
        scanf("%d",&a[i]);

    for(i=0;i<=4;i++){
        b[j] = a[i];
        j--;;
    }

    printf("\n");
    for(j=0;j<=4;j++){
        printf("%d ",b[j]);
    }
    printf("\n");
}

