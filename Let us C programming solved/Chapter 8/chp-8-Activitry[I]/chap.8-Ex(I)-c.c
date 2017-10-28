#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[5];
    int i,j,small=100;

    int *k;
    k = &small;

    printf("Enter the Elements: \n");
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<=4;i++){
        if(a[i]<=*k)
            *k = a[i];
    }

    printf("\nSmallest number of this array is %d\n",*k);
}



