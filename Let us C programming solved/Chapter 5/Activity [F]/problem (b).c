#include <stdio.h>
#include<stdlib.h>

sas(int *a)
{
    int sum = 0;
    int *j;
    j = &sum;
    if(*a>=10000){
        sum = sum + (*a/10000);
        *a = *a%10000;
    }
    if(*a>=1000){
        sum = sum + (*a/1000);
        *a = *a%1000;
    }
    if(*a>=100){
        sum = sum + (*a/100);
        *a = *a%100;
    }
    if(*a>=10){
        sum = sum + (*a/10);
        *a = *a%10;
    }
    if(*a<10){
        sum = sum + *a;
    }
    return (*a = *j);
}
int main()
{
    int a,b=0;

    printf("Enter a five digit integer: ");
    scanf("%d",&a);

    sas(&a);
    printf("\nSum of a five digit given integer = %d\n",a);
}



