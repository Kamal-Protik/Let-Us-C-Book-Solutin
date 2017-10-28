#include<stdio.h>
#include<stdlib.h>

int main()
{
     int a1,a2,a3,sum;
     printf("Enter the Angles: ");
     scanf("%d %d %d",&a1,&a2,&a3);

     sum = a1+a2+a3;
     if(sum==180)
        printf("\nThe triangle is valid.\n");
     else
        printf("\nThe triangle is not valid.\n");
     return 0;
}

