#include<stdio.h>
#include<stdlib.h>

int main()
{
    float sal;
    printf("Enter the Salary: ");
    scanf("%f",&sal);

    if((sal<40000 && sal>25000)?printf("\nManager."):((sal<25000 && sal>15000)?printf("\nAccountant."):printf("\nclerk")));
    return 0;
}

