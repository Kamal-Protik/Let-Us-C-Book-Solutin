#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num[] = {24,34,12,44,56,17};
    int i,*j;

    j = &num[0];

    for(i=0;i<=5;i++){
        printf("\nAddress = %u ",j);
        printf("Element = %d",*j);
        j++;
    }
}

