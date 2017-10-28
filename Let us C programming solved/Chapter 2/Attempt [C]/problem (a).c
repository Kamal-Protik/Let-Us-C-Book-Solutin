#include<stdio.h>
#include<stdlib.h>

int main()
{
    int cost_price,selling_price,profit,loss;

    printf("Enter Cost price and selling price: ");
    scanf("%d %d",&cost_price,&selling_price);

    profit = selling_price - cost_price;
    loss = cost_price - selling_price;

    if(cost_price<selling_price)
    {
        printf("\nThe seller has made profit");
        printf("\nAnd the profit is : %d\n",profit);
    }
    else{
        printf("\nThe seller has made loss");
        printf("\nAnd the loss is : %d\n",loss);
    }
    return 0;
}

