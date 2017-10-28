#include<stdio.h>
#include<stdlib.h>
#include"interest.h"

int main()
{
    float l_a,i_r,n_o_y,si;
    printf("\nEnter loan amount: ");
    scanf("%f",&l_a);
    printf("\nEnter interest rate: ");
    scanf("%f",&i_r);
    printf("\nEnter number of year: ");
    scanf("%f",&n_o_y);

    si = simpleinterest;
    printf("\nThe amount of Interest is %f\n",si);

    return 0;
}

