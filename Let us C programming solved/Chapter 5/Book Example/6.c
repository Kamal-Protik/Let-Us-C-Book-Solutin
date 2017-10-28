#include <stdio.h>
#include<stdlib.h>

float square(float x)
{
    float y;
    y = x*x;
    return(y);
}
int main()
{
    float a,b;

    printf("\nEnter any Number: ");
    scanf("%f",&a);

    b = square(a);
    printf("\nThe Square of the entered number is %f",b);
}




