#include<stdio.h>
#include<stdlib.h>
#define Condition (ch>='A' && ch<='Z')

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(Condition)
        printf("\nThis is upper case letter.\n");
    else
        printf("\nThis is not upper case letter.\n");

    return 0;
}

