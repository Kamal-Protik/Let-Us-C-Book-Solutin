#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter three sides of a Triangle: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && b==c && c==a)
        printf("\nThe triangle is Equilateral.\n");
    else if(a==b||a==c||b==c)
        printf("\nThe triangle is Isosceles.\n");
    else if(a!=b!=c)
        printf("\nThe  triangle is scalene.\n");
    return 0;
}

