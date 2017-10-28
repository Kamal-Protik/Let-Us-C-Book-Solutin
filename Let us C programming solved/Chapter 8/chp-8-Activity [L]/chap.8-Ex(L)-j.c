#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[6],i,j,temp;

    printf("Enter the Array element: \n");
    for(i=0;i<6;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<6;i++){
        if(a[i]%2==0){
            for(j=i+1;j<6;j++){
                if(a[j]%2!=0){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }

    printf("\nAfter interchanges the resultant array is : \n");
    for(i=0;i<6;i++){
        printf("%d ",a[i]);
    }
}

