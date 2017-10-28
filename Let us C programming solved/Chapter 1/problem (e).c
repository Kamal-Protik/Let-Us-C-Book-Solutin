#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    float length,breadth,rectangle,radius,circle,area_of_rectangle,perimeter_of_rectangle,area_of_circle,perimeter_of_circle;
    printf("1. area and perimeter of Rectangle.\n2. area and perimeter of circle.\n");
    printf("\nSelect what you want: ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("\nEnter the value of length: ");
        scanf("%f",&length);
        printf("\nEnter the value of breadth: ");
        scanf("%f",&breadth);
        area_of_rectangle = length * breadth;
        perimeter_of_rectangle = (2*length)+(2*breadth);
        printf("\n\nThe area of rectangle is = %0.3f",area_of_rectangle);
        printf("\n\nThe perimeter of rectangle is = %0.3f\n",perimeter_of_rectangle);
        return 0;
    }
    if(n==2)
    {
        printf("Enter the radius magnitude of circle: ");
        scanf("%f",&radius);
        area_of_circle = 3.1416*(radius*radius);
        perimeter_of_circle = 2*3.1416*radius;
        printf("\n\nThe area of rectangle is = %0.3f\n",area_of_circle);
        printf("\n\nThe perimeter of rectangle is = %0.3f\n",perimeter_of_circle);
        return 0;
    }
    return 0;

}
