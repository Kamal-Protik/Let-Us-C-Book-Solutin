#include<stdio.h>
#include<stdlib.h>

int main()
{
    int stock,item,credit;
    printf("Enter how much Stock are available: ");
    scanf("%d",&stock);
    printf("\nEnter credit( 1 = Ok and 0 = Not Ok): ");
    scanf("%d",&credit);
    printf("\nHow much item you need: ");
    scanf("%d",&item);

    if(item<=stock && credit == 1)
        printf("\nSupply has Requirement.\n");
    if(credit == 0)
        printf("\nYour Credit is Insufficient.\n");
    if(credit == 1 && item>stock)
        printf("\nUnavailable Stock So the balance will be shipped.\n");
    return 0;
}

