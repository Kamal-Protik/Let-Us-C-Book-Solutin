#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    float r,a;
    const float pi = 3.14;

    printf("\nEnter radius of circle: ");
    scanf("%f",&r);
    a = pi * r * r;

    printf("\nArea of circle = %f",a);
}

