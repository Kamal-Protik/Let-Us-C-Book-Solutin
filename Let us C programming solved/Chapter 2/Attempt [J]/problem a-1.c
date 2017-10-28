#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'?printf("\nThis is lower case Alphabet.\n"):printf("\nThis is not lower case alphabet.\n"))
        return 0;
}

