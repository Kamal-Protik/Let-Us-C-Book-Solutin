#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    int j,k,result;
    printf("Enter the value of J and K: ");
    scanf("%d %d",&j,&k);
    gcd(&result,j,k);
    printf("\nThe greatest common divisor of the given input is : %d\n",result);
}
gcd(int *result,int a,int b)
{
    int j = a,k = b;
    int c,d=1;
    while(d!=0){
        c = j/k;
        d = j-c*k;
        j = k;
        k = d;
        *result = j;
    }
    return *result;
}

