#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[25];

    printf("Enter your full name: ");
    scanf("%[^\n]s",name);
    printf("%s",name);
}

