#include<stdio.h>
#include<stdlib.h>

int main()
{
    float store=1,i,num;
    printf("Enter the number: ");
    scanf("%f",&num);

    for(i=num;i>=1;i--)
        store=store*i;
    printf("\nThe factorial value of an Entire number is : %0.2f\n",store);
    return 0;
}

