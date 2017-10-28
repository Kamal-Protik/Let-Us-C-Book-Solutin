#include<stdio.h>
#include<stdlib.h>

int main()
{
    char arr[] = "Bamboozled";
    int len1,len2;

    len1 = strlen(arr);
    len2 = strlen("Humpty Dumpty");

    printf("\nString = %s length = %d",arr,len1);
    printf("\nString = %s length = %d","Humpty Dumpty",len2);
}

