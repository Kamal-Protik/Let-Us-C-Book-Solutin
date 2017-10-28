#include <stdio.h>
#include<stdlib.h>

int main()
{
    int radius;
    float area,perimeter;

    printf("\nEnter radius of a circle: ");
    scanf("%d",&radius);

    areaperi(radius,&area,&perimeter);

    printf("For Radius %d ,, area = %f and perimeter = %f",radius,area,perimeter);
}
areaperi(int r,float *a,float *p)
{
    *a = 3.1416*r*r;
    *p = 2*3.1416*r;
}

