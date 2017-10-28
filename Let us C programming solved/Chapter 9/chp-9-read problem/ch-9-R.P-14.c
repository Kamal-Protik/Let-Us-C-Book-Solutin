#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char source[] = "Folks!";
    char target[30] = "Hello";

    strcat(target,source);

    printf("\nSource string = %s",source);
    printf("\nTarget string = %s",target);
}

