#include<stdio.h>
#include<stdlib.h>

int main()
{
    int c,d,temp;

    printf("Enter the value of C : ");
    scanf("%d",&c);
    printf("Enter the value of D : ");
    scanf("%d",&d);
    printf("\n\nBefore interchanging C = %d and D = %d",c,d);
    temp = c;
    c = d;
    d = temp;
    printf("\n\nAfter interchanging C = %d and D = %d\n",c,d);
    return 0;
}

