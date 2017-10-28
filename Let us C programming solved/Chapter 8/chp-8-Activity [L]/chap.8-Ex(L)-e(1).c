#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[6][6],b[6][6];
    int i,j;

    printf("Enter Matrix A: \n");
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter Matrix B: \n");
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nAddition of these two matrix is : \n");
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}



