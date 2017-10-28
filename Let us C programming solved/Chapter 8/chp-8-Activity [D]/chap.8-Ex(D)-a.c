#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[25],i,num,count=0;

    for(i=0;i<=24;i++){
        printf("Enter the %d th element of this array: ",i);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the Number which you want to search: ");
    scanf("%d",&num);

    for(i=0;i<=24;i++){
        if(num==a[i]){
            count++;
        }
    }
    if(count!=0)
        printf("\nThis number is present in this array %d times\n",count);
        else
            printf("\nThis number is not in this array...!\n");
}




