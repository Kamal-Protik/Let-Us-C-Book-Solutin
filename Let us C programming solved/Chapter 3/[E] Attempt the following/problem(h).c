#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k,num;
    printf("Which of the number you want to find Multiplication-table : ");
    scanf("%d",&num);
    printf("How many time to show this Multiplication-table : ");
    scanf("%d",&j);
    printf("\n");
    for(i=1;i<=j;i++){
        k=num*i;
        printf("%d * %d = %d\n",num,i,k);
    }
    return 0;
}



