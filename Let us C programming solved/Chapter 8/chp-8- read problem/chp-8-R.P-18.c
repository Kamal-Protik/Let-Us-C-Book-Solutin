#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[3][4] = {
            1,2,3,4,
            5,6,7,8,
            9,0,1,6
    };

    display(a,3,4);
    show(a,3,4);
    print(a,3,4);

}
display(int *q,int row,int col)
{
    int i,j;

    for(i=0;i<row;i++){
        printf("\n");
        for(j=0;j<col;j++){
            printf("%d ",*(q+i*col+j));
        }
    }
    printf("\n");
}
show(int (*q)[4],int row , int col)
{
    int i,j,*p;
    for(i=0;i<row;i++){
            p = q + i;
        printf("\n");
        for(j=0;j<col;j++){
            printf("%d ",*(p+j));
        }
    }
    printf("\n");
}
print(int q[][4],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++){
        printf("\n");
        for(j=0;j<col;j++){
            printf("%d ",q[i][j]);
        }
    }
}

