#include<stdio.h>
#include<stdlib.h>
#define pi 3.1416
#define trianglearea(b,h) (b*h/2)
#define triangleperi(a,b,c) (a+b+c)
#define squarearea(l) (l*l)
#define squareperi(l) (l+l+l+l)
#define circlearea(r) (pi*(r*r))
#define circleperi(r) (2*pi*r)

/*int main()
{
    float slt,B,h,a,b,c,l,r,t1,t2,l1,l2,r1,r2;
    printf("\n\t1.triangle\n\t2.square\n\t3.circle\n");
    printf("Select what you want.\n");
    scanf("%f",&slt);

    if(slt==1){
        printf("\nEnter Base and height of the Triangle: ");
        scanf("%f %f",&B,&h);
        printf("\nEnter the value of every side of the Triangle: ");
        scanf("%f %f %f",&a,&b,&c);
        t1=trianglearea(B,h);
        t2=triangleperi(a,b,c);
        printf("\nThe area of the Triangle is %f",t1);
        printf("\nThe perimeter of the Triangle is %f\n",t2);
    }
    if(slt==2){
        printf("\nEnter the length of a Square: ");
        scanf("%f",&l);
        l1 = squarearea(l);
        l2 = squareperi(l);
        printf("\nThe area of a Square is %f",l1);
        printf("\nThe perimeter of a Square is %f\n",l2);
    }
    if(slt==3){
        printf("\nEnter the Radius of a Circle: ");
        scanf("%f",&r);
        r1 = circlearea(r);
        r2 = circleperi(r);
        printf("\nThe area of a Circle is %f",r1);
        printf("\nThe perimeter of a Circle is %f\n",r2);
    }
    return 0;
}*/

