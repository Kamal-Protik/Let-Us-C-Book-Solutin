#include <stdio.h>
#include<stdlib.h>

int main()
{
    int a,sum = 0;

    printf("Enter a five digit integer: ");
    scanf("%d",&a);

    summ(a,sum);
}
summ(int a,int sum)
{
    int i;
            if(a>=10000){
            sum = sum + (a/10000);
            summ(a%10000,sum);
        }
        else if(a>=1000){
            sum = sum + (a/1000);
            summ(a%1000,sum);
        }
        else if(a>=100){
            sum = sum + (a/100);
            summ(a%100,sum);
        }
        else if(a>=10){
            sum = sum + (a/10);
            summ(a%10,sum);
        }
        else if(a<10){
            sum = sum + a;
            printf("\nSum of a five digit given integer = %d\n",sum);
        }
}





