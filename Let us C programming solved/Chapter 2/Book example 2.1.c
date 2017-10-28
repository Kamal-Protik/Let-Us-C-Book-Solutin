#include<stdio.h>
#include<stdlib.h>

int main()
{
    int dis = 0,qty;
    float total_exp,rate;
    printf("Enter the Quantity and rate per item: ");
    scanf("%d %f",&qty,&rate);
    if(qty > 1000)
        dis = 10;
    total_exp = (qty*rate)-(qty*rate*dis/100);
    printf("\nThe total expense is: %f\n",total_exp);
    return 0;
}
