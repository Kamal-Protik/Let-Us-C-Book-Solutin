#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr[4];
    int i=40,j=50,k=60,l=70,m;

    arr[0] = &i;
    arr[1] = &j;
    arr[2] = &k;
    arr[3] = &l;

    for(m=0;m<4;m++){
        printf("%d ",(*arr[m]));
    }
}

