#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,temp;
    int a[4][4] = {
                    1,2,3,4,
                    5,6,7,8,
                    9,10,11,12,
                    13,14,15,16
    };

    printf("Current Matrix is given below: \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<4;i++){
        for(j=i;j<4;j++){
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    printf("\nThe transpose matrix is given below: \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}



