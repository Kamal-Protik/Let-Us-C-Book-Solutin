#include<stdio.h>
#include<stdlib.h>
#define ISDIGIT(y) (y>=48 && y<=57)

int main()
{
    char ch;

    printf("Enter any digit: ");
    scanf("%c",&ch);

    if(ISDIGIT(ch))
        printf("\nYou entered a digit");
    else
        printf("\nIllegal input");

    return 0;
}

