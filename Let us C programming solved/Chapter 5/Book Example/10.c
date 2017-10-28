//Follow this Code very carefully...
#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i=3,*j,**k;

    j = &i;
    k = &j;
    printf("\nAddress of i = %u",&i);
    printf("\nValue of i = %d",i);
    printf("\nAddress of i = %d",j);
    printf("\nValue of j = %d",j);
    printf("\nAddress of j = %u",&j);
    printf("\nAddress of k = %u",&k);
    printf("\nValue of k = %d",k);
    printf("\nAddress of j = %d",k);
    printf("\nvalue of j = %d",*k);
    printf("\nvalue of i = %d",**k);
}
