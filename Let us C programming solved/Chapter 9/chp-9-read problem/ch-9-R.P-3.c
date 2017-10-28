#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[] = "Klinsman";
    char *ptr;

    ptr = name;

    while(*ptr != '\0'){
        printf("%c",*ptr);
        ptr++;
    }
}

