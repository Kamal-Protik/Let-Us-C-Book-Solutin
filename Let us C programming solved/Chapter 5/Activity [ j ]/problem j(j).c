#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float centroid(float x1,float x2,float x3,float y1,float y2,float y3)
{
    float x,y,Ox,Oy;
    printf("\n\n****According to the Question\nif the point (x,y) lines inside the triangle\nthen return 1 otherwise 0 ****\n\n");
    Ox = (x1+x2+x3)/3;
    Oy = (y1+y2+y3)/3;
    printf("\nOx = %f and Oy = %f",Ox,Oy);
    printf("\nEnter the value of x and y: ");
    scanf("%f %f",&x,&y);
    if(x>=0 && x<=Ox && y>=0 && y<=Oy){
        printf("\nThe Result is 1.***It means that\nThe point (x,y) lines inside the triangle***\n");
    }
    else
        printf("\nThe Result is 0.***It means that\nThe point (x,y) lines outside the triangle***\n");
}
float area(float a,float b,float c)
{
    float S,Area;
    S = (a + b + c)/2;
    Area = sqrt(S*(S-a)*(S-b)*(S-c));
    return Area;
}
float dis(float x1,float x2,float y1,float y2)
{
    float d;
    d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return d;
}
int main()
{
    float A,B,C,Ax,Bx,Cx,Ay,By,Cy,a,b,c,t_area,x,y;

    printf("Enter the co-ordinates of A(x,y): ");
    scanf("%f %f",&Ax,&Ay);
    printf("\nEnter the co-ordinates of B(x,y): ");
    scanf("%f %f",&Bx,&By);
    printf("\nEnter the co-ordinates of C(x,y): ");
    scanf("%f %f",&Cx,&Cy);
    printf("\n****We are denoted the distance of AB = a , BC = b and CA = c****\n");
    a = dis(Ax,Bx,Ay,By);
    printf("\nSo the distance of AB = a = %f",a);
    b = dis(Bx,Cx,By,Cy);
    printf("\nAnd the distance of BC = b = %f",b);
    c = dis(Cx,Ax,Cy,Ay);
    printf("\nAnd the distance of CA = c = %f",c);
    t_area = area(a,b,c);
    printf("\n\nThe area of this Triangle is : %f\n",t_area);
    centroid(Ax,Bx,Cx,Ay,By,Cy);
}


