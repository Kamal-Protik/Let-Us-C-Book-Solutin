#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *name[6];
    int i;

    for(i=0;i<=5;i++){
        printf("\nEnter name: ");
        scanf("%s",name[i]);
    }
}

