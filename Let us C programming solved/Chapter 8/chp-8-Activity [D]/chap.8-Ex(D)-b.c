#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[25],i,count_p=0,count_n=0,count_o=0,count_e=0;

    for(i=0;i<=24;i++){
        printf("Enter the %d th element : ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<=24;i++){
        if(a[i]>=0)
            count_p++;
        if(a[i]<0)
            count_n++;
        if(a[i]%2==0)
            count_e++;
        if(a[i]%2!=0)
            count_o++;
    }
    printf("\nThis array contain ...\n\t%d Positive number\n\t%d Negative number\n\t%d Odd number And\n\t%d Even number",count_p,count_n,count_o,count_e);
}


