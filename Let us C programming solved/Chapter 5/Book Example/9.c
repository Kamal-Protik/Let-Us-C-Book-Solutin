#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i =3;
    int *j;

    j = &i;
    printf("\nAddress of i = %u",&i);
    printf("\nAddress of i = %d",j);
    printf("\nAddress of j = %u",&j);
    printf("\nValue of j = %d",j);
    printf("\nValue of i = %d",i);
    printf("\nValue of i = %d",*(&i));
    printf("\nValue of i = %d",*j);
}

