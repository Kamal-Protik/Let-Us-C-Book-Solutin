#include<stdio.h>
#include<stdlib.h>
#include"areaperi.h"

int main()
{
    float slt,B,h,a,b,c,l,r,t1,t2,l1,l2,r1,r2;

    printf("Enter Base and height of a Triangle: ");
    scanf("%f %f",&B,&h);
    t1=trianglearea(B,h);
    t2=triangleperi(a,b,c);
    printf("\nArea of a Triangle is %f",t1);
    printf("\nPerimeter of a Triangle is %f\n",t2);

    printf("\nEnter the length of a Square: ");
    scanf("%f",&l);
    l1 = squarearea(l);
    l2 = squareperi(l);
    printf("\nThe area of a Square is %f",l1);
    printf("\nThe perimeter of a Square is %f\n",l2);

    printf("\nEnter the Radius of a Circle: ");
    scanf("%f",&r);
    r1 = circlearea(r);
    r2 = circleperi(r);
    printf("\nThe area of a Circle is %f",r1);
    printf("\nThe perimeter of a Circle is %f\n",r2);
}

