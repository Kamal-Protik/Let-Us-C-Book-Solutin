#include<stdio.h>
#include<stdlib.h>

int main()
{
    char g;
    int yos,qual,sal;

    printf("Enter Gender,Year of service and Qualification(0=G,1=PG): ");
    scanf("%c %d %d",&g,&yos,&qual);

    if(g=='m' && yos>=10 && qual==1)
        sal = 15000;
    if((g=='m' && yos>=10 && qual==0) || (g=='m' && yos<10 && qual==1))
        sal = 10000;
    if(g=='m' && yos<10 && qual==0)
        sal = 7000;
    if(g=='f' && yos>=10 && qual==1)
        sal = 12000;
    if(g=='f' && yos>=10 && qual==0)
        sal = 9000;
    if(g=='f' && yos<10 && qual==1)
        sal = 10000;
    if(g=='f' && yos<10 && qual==0)
        sal = 6000;
    printf("Salary is : %d",sal);
    return 0;
}
