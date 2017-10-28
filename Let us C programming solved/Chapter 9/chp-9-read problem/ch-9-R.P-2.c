#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[] = "Klinsman";

    int i = 0;
    while(name[i]!= '\0'){
        printf("%c",name[i]);
        i++;
    }
}

