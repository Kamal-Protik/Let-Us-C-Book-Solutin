#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i = 3,*j,**k,***l,****m,*****n;

    j = &i;
    k = &j;
    l = &k;
    m = &l;
    n = &m;

    printf("\nj contain the address of i = %d",j);
    printf("\nk contain the address of j = %d",k);
    printf("\nl contain the address of k = %d",l);
    printf("\nm contain the address of l = %d",m);
    printf("\nn contain the address of m = %d",n);
    printf("\nAnd finally the address of n = %u",&n);
    printf("\n\n\nValue of i = %d",i);
    printf("\nValue of j = %d (Address of i)",j);
    printf("\nValue of k = %d (Address of j)",k);
    printf("\nValue of l = %d (Address of k)",l);
    printf("\nValue of m = %d (Address of l)",m);
    printf("\nValue of n = %d (Address of m)",n);
    printf("\n\n\nvalue of i = %d (*(&i))",*(&i));
    printf("\nvalue of i = %d (*j)",*j);
    printf("\nvalue of i = %d (**k)",**k);
    printf("\nvalue of i = %d (***l)",***l);
    printf("\nvalue of i = %d (****m)",****m);
    printf("\nvalue of i = %d (*****n)",*****n);
}

