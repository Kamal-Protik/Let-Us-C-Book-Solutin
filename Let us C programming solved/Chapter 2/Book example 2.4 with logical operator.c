#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m1,m2,m3,m4,m5,per;

    printf("Enter marks in five subject: ");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    per = (m1+m2+m3+m4+m5)/5;
    printf("\nTotal percentage = %d\n",per);
    if(per>=60)
        printf("\nFirst division\n");
    if(per>=50 && per<=59)
        printf("\nSecond division\n");
    if(per>=40 && per<=49)
        printf("\nThird division\n");
    if(per<40)
        printf("\nFail\n");

    return 0;
}
