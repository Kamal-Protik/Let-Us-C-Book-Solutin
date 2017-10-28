#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n,
    cntp=0,cntn=0,cntz=0,i;
    for(i=1;i<=7;i++)
    {
        scanf("%d",&n);
        if(n>0)
            cntp+=1;
        if(n<0)
            cntn+=1;
        if(n==0)
            cntz+=1;
    }
    printf("\nThe given inputs has: \n\n%d positive \n%d Negative and \n%d Zeros\n",cntp,cntn,cntz);
    return 0;
}
