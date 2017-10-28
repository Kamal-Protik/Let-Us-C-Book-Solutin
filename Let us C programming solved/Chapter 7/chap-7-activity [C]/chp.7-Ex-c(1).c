#include<stdio.h>
#include<stdlib.h>
#define Mean ((a+b)/2)

int main()
{
    float a,b,m;
    printf("Enter a and b: ");
    scanf("%f %f",&a,&b);

    m = Mean;
    printf("\nMean of these two numbers is : %f",m);
}

