#include<stdio.h>
#include<stdlib.h>

int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if((year%4==0) || (year%4==0 && year%100==0) || (year%400==0 && year%100==0))
        printf("\nThe given year is leap year\n");
    else
        printf("\nThe given year is not leap year\n");
    return 0;
}

