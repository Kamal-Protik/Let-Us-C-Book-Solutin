#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sex,ms;
    int age;
    printf("Enter Age , Sex and marital status: ");
    scanf("%d %c %c",&age,&sex,&ms);
    if((ms=='m') || (ms=='u' && sex=='m' && age>30) || (ms=='u' && sex=='f' && age>25))
        printf("\nDriver is insured.\n");
    else
        printf("\nDriver is not insured.\n");
    return 0;
}
