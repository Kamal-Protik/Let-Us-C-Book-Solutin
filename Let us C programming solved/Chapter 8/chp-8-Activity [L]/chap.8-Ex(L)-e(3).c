#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[4][4] = {
                    2,1,0,3,
                    5,6,7,4,
                    8,10,9,11,
                    13,12,15,14
    };
    int i,j,*k,temp;
    k = &a[0][0];

    for(i=0;i<16;i++){
        for(j=0;j<16;j++){
            if(*(k+i)>=*(k+j)){
                temp = *(k+i);
                *(k+i) = *(k+j);
                *(k+j) = temp;
            }
        }
    }

    printf("\nAfter sorting the array element is look like : \n");
    for(i=3;i>=0;i--){
        for(j=3;j>=0;j--){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}



