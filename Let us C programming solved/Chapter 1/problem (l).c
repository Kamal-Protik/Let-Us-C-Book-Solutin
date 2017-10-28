#include<stdio.h>
#include<stdlib.h>

int main()
{
    int item,selling_price,profit,cost_price;
    printf("Total item = ");
    scanf("%d",&item);
    printf("\nTotal selling price: ");
    scanf("%d",&selling_price);
    printf("\nTotal profit: ");
    scanf("%d",&profit);
    cost_price = (selling_price - profit)/item;
    printf("\nSo the cost price of each item is : %d\n",cost_price);
    return 0;
}
