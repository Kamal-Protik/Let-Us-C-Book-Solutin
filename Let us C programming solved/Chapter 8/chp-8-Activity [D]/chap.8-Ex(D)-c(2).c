#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[25],i,j,temp;

    for(i=0;i<=24;i++){
        printf("Enter %d th element: ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<=24;i++){
            for(j=0;j<=24;j++){
                if(a[j]>=a[j+1]){
            temp = a[j+1];
            a[j+1] = a[j];
            a[j] = temp;
            }
        }
    }
    for(i=0;i<=24;i++){
        printf("\t%d",a[i]);
    }
}



