#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length,breadth,area,perimeter;
    printf("Enter the length and breadth : ");
    scanf("%d %d",&length,&breadth);

    area = length * breadth;
    perimeter = (2*length) + (2*breadth);
    printf("\nThe Area of the rectangle is %d\nAnd The perimeter of the rectangle is %d",area,perimeter);
    if(area>perimeter)
        printf("\n\nThe Area of the rectangle is greater than its perimeter.\n\n");
    else
        printf("\n\nThe Area of the rectangle is less than its perimeter.\n\n");
    return 0;
}

