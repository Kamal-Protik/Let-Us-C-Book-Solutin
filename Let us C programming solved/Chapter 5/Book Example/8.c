#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i =3;
    printf("\nAddress of i = %u",&i);
    printf("\nvalue of i = %d",i);
    printf("\nvalue of i = %d",*(&i));
}

