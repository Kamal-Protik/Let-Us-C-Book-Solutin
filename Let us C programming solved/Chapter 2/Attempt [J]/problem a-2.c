#include<stdio.h>
#include<stdlib.h>

int main()
{
    char i;
    printf("Enter the character: ");
    scanf("%c",&i);

    if((i>=0 && i<=47) || (i>=58 && i<=64) || (i>=91 && i<=96) || (i>=123 && i<=127)?printf("\nThis is a special symbol.\n"):printf("\nThis is not a special symbol.\n"))

        return 0;
}

