#include<stdio.h>
#include<stdlib.h>
#define Condition ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(Condition)
        printf("\nThis is an Alphabet.\n");
    else
        printf("\nThis is not an Alphabet.\n");

    return 0;
}

