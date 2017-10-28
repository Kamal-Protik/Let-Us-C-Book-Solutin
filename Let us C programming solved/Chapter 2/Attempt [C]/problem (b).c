#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);

    if(num%2==0)
        printf("\nGiven integer number is EVEN\n");
    else
        printf("\nGiven integer number is ODD\n");
    return 0;
}

