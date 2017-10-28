#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char arr[] = "Bamboozled";
    int len1,len2;

    len1 = xstrlen(arr);
    len2 = xstrlen("Humpty Dumpty");

    printf("\nString = %s length = %d",arr,len1);
    printf("\nString = %s length = %d","Humpty Dumpty",len2);
}
xstrlen(char *s)
{
    int i;
    i = 0;
    while(*s!='\0'){
        i++;
        s++;
    }
    return(i);
}

