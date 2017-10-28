#include<stdio.h>
#include<stdlib.h>

avg(float *a,float *c)
{
    float d;
    d = *a;
    *a = *a/3;
    *c = (d*100)/300;
}
int main()
{
    float b,m,e,a,c;

    printf("\nEnter Mark of Bangla: ");
    scanf("%f",&b);
    printf("\nEnter Mark of Math: ");
    scanf("%f",&m);
    printf("\nEnter Mark English: ");
    scanf("%f",&e);
    a = b+m+e;

    avg(&a,&c);
    printf("\nAverage mark of every subject = %0.2f\n",a);
    printf("\nPercentage of Total marks is = %0.2f\n",c);
}


