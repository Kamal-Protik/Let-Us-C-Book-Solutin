#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,sum;

    printf("Enter a number: ");
    scanf("%d",&a);

    sum = add(a);
    printf("\nSum of First 25 digit = %d\n",sum);
}
add(int sum)
{
    int i,b=0;
    for(i=sum;i<=sum+24;i++){
        b = b+i;
    }
    return b;
}

