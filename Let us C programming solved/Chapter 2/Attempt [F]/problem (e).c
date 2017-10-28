#include<stdio.h>
#include<stdlib.h>

int main()
{
    int late;
    printf("How many days you are late: ");
    scanf("%d",&late);

    if(late>=1 && late<=5)
        printf("\nYour fine is 50 paise.\n");
    else if(late>=6 && late<=10)
        printf("\nYour fine is 1 Rupee.\n");
    else if(late>10 && late<=30)
        printf("\nYour fine is 5 Rupee.\n");
    else
        printf("\nYour membership is Cancelled.\n");
    return 0;
}

