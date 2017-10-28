#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n,overtime=0,overtime_pay;

    for(i=1;i<=10;i++){
        printf("Enter Total work hour of %d no. Employee: ",i);
        scanf("%d",&n);
        if(40<n){
            overtime = n-40;
            overtime_pay = overtime *12;
            printf("\nThe total overtime pay of %d no. employee   = %d\n\n",i,overtime_pay);
            continue;
        }
        else
            printf("\nNo overtime pay of %d no. employee\n\n",i);
    }
    return 0;
}

