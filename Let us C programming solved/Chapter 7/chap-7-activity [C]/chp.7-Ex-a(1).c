#include<stdio.h>
#include<stdlib.h>
#define Condition (ch>='a' && ch<='z')

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(Condition)
        printf("\nThis is small case letter.\n");
    else
        printf("\nThis is not small case letter.\n");

    return 0;
}

