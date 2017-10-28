#include<stdio.h>
#include<stdlib.h>

int main()
{
    float km,meters,feet,inches,centimeters,mile,yard,nauticalMile;
    int n;
    printf("Enter the distance in Kilometer: ");
    scanf("%f",&km);
    printf("\n1. meters\n2. feet\n3. inches\n4. centimeters\n5. Mile\n6. Yard\n7. Nautical mile");
    meters = km * 1000;
    feet = km * 3280.84;
    inches = km * 39370.1;
    centimeters = km * 100000;
    mile = km * 0.621371;
    yard = km * 1093.61;
    nauticalMile = km * 0.539957;

    printf("\n\nselect what you want:  ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("\n%f",meters);
        return 0;
    }
    if(n==2)
    {
        printf("\n%f",feet);
        return 0;
    }
    if(n==3)
    {
        printf("\n%f",inches);
        return 0;
    }
    if(n==4)
    {
        printf("\n%f",centimeters);
        return 0;
    }
    if(n==5)
    {
        printf("\n%f",mile);
        return 0;
    }
    if(n==6)
    {
        printf("\n%f",yard);
        return 0;
    }
    if(n==7)
    {
        printf("\n%f",nauticalMile);
        return 0;
    }
    return 0;
}
