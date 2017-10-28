#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a,b,c;
    float s,area,d;

    printf("Enter length a,b and c: ");
    scanf("%d %d %d",&a,&b,&c);

    s = (a+b+c)/2;
    area = s*(s-a)*(s-b)*(s-c);
    d = sqrt(area);
    printf("\nThe area of a Triangle is : %0.3f",d);
}

