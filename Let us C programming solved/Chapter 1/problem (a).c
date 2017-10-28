#include <stdio.h>
#include <stdlib.h>

int main()
{
    int basic_salary,dearness_allowance,houseRent_allowance,gross_salary,total_DA,total_HRA;
    printf("Ramesh basic salary: ");
    scanf("%d",&basic_salary);
    printf("Ramesh dearness_allowance inputing in percentage : ");
    scanf("%d",&dearness_allowance);
    printf("Ramesh houseRent_allowance inputing in percentage : ");
    scanf("%d",&houseRent_allowance);
    total_DA = basic_salary*dearness_allowance/100;
    total_HRA = basic_salary*houseRent_allowance/100;
    gross_salary = basic_salary+total_DA+total_HRA;
    printf("\nRamesh's Gross Salary is : %d\n\n",gross_salary);
    printf("Where\ndearness allowance is : %d\n",total_DA);
    printf("house rent allowance is : %d",total_HRA);
    return 0;
}
