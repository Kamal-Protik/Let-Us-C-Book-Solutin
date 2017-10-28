#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a == b+c || b == a+c || c == a+b)
        printf("\nThe triangle is Valid.\n");
    else
        printf("\nThe triangle is not Valid.\n");
    return 0;
}

