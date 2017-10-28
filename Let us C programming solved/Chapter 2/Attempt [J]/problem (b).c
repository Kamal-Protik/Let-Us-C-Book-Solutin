#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    printf("Enter the year: ");
    scanf("%d",&i);

    if(i%4==0?printf("\nThis year is a leap year.\n"):printf("\nThis year is not a leap year.\n"))

    return 0;
}

