#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char source[] = "Sayonara";
    char target[10];

    strcpy(target,source);

    printf("\nSource String = %s",source);
    printf("\nTarget String = %s",target);
}

