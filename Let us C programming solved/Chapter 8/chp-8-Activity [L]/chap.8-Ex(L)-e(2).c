#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[2][2],b[2][2];
    int i,j,k;

    printf("Enter Matrix A : \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter Matrix B : \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nResultant Matrix is given below: \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",a[i][j]*b[j][i]);
        }
        printf("\n");
    }
}


