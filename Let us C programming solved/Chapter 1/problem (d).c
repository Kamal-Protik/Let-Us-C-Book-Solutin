#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    float fahrenheit,celsius,kelvin;
    printf("Input the Temperature in Fahrenheit: \n");
    scanf("%f",&fahrenheit);
    printf("\n1. Celsius\n2. Kelvin");
    printf("\n\nSelect what you want : ");
    scanf("%d",&n);
    celsius = fahrenheit * 17.2222;
    kelvin = fahrenheit * 255.928;
    if(n==1)
    {
        printf("\nTotal temperature in celsius = %0.3f\n",celsius);
        return 0;
    }
    if(n==2)
    {
        printf("\nTotal temperature in kelvin = %0.3f\n",kelvin);
        return 0;
    }
    return 0;
}
