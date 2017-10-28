#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char a[20];
    gets(a);
    int len,i;
    len = strlen(a);
    for(i=0;i<=len;i++){
        if(a[i]>='A' && a[i]<='Z')
            a[i] = a[i]+32;
    }

    printf("%s",a);
}

