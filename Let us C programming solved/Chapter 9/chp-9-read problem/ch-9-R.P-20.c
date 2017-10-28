#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *name[6];
    char n[50];
    int len,i;
    char *p;

    for(i=0;i<=5;i++){
        printf("\nEnter name: ");
        scanf("%s",n);
        len = strlen(n);
        p = malloc(len+1);
        strcpy(p,n);
        name[i] = p;
    }
    for(i=0;i<=5;i++){
        printf("\n%s",name[i]);
    }
}

