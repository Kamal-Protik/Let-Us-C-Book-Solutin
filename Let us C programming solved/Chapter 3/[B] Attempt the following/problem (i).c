#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n,input,max=0,min=99999,i,range;//here min = 99999 is positive infinite number.
    printf("How many input you want to entire: ");
    scanf("%d",&input);
    printf("\nEnter %d integers.\n",input);
    for(i=1;i<=input;i++){
        scanf("%d",&n);
        if(min>n){
            min = n;
        }
        if(max<n){
            max=n;
        }
    }
    printf("\nThe Minimum integer is %d and\nThe Maximum integer is %d\n",min,max);
    range = max - min;
    printf("\nThe range of the set of given input is %d\n",range);
    return 0;
}
