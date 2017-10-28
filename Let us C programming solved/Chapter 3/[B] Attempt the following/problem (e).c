#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,n1,rem,i,store;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        store=0;
        n1 = i;
    while(n1!=0){
        rem = n1%10;
        store+=(rem*rem*rem);
        n1=n1/10;
    }
    if(store==i)
        printf("\n%d is an Armstrong number\n",i);
    else
        printf("%d is not an Armstrong number\n",i);
    }
    return 0;
}
