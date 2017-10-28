#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Number of Element: ");
    scanf("%d",&n);

    int arr[n];
    int i,check;

    printf("\nEnter the element of this array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nwhich element you want to check: ");
    scanf("%d",&check);

    if(check >= 0){
        printf("\n%d = %d",arr[check],arr[n-(check+1)]);
    }
}



