#include<stdio.h>
#include<stdlib.h>
#include<dos.h>

int main()
{
    int a[4][4] = {
                    1,4,15,7,
                    8,10,2,11,
                    14,3,6,13,
                    12,9,5,0 // 0 mean Blank
    };
    int i,j;

    printf("_________________\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d | ",a[i][j]);
        }
        printf("\n");
        printf("_________________\n");
    }
}



