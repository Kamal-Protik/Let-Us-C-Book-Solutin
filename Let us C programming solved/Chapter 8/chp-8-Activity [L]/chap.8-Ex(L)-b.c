#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[5][5] = {
                    1,2,0,3,5,
                    6,8,9,7,4,
                    10,20,25,24,32,
                    8,56,52,48,60,
                    23,54,6,0,7
    };
    int i,j,largest;
    largest = a[0][0];

    for(i=0;i<=4;i++){
        for(j=0;j<=4;j++){
            if(a[i][j] >= largest)
                largest = a[i][j];
        }
    }

    printf("\nSo the Largest Value = %d\n",largest);
}



