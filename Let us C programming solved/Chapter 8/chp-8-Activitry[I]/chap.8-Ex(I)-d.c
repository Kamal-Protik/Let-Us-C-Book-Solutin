#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int i;

    modify(a,10);
    for(i=0;i<=9;i++){
        printf("%d ",a[i]);
    }
}
modify(int *x,int y)
{
    int i;
    for(i=0;i<y;i++){
        x[i] = x[i] * 3;
    }
}



