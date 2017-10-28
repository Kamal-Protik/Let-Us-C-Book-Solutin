#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char source[] = "Sayonara";
    char target[10];

    xstrcpy(target,source);

    printf("\nSource String = %s",source);
    printf("\nTarget String = %s",target);
}
xstrcpy(char *t,char *s)
{
    while(*s!='\0'){
        *t = *s;
        s++;
        t++;
    }
    *t = '\0';
}

