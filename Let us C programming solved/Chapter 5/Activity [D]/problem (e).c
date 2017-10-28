#include<stdio.h>
#include<stdlib.h>

void primef(int x)
{
    int i;
    for(i=2;i<=x;){
        if(x%i==0)
        {
            printf("%d ",i);
            x=x/i;
        }
    else
        {
            i++;
        }
    }
}
int main()
{
    int a;

    printf("\nEnter a positive integer: ");
    scanf("%d",&a);

    primef(a);
}


