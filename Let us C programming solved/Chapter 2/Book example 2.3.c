#include<stdio.h>
#include<stdlib.h>

int main()
{
    int bs,hra,da,gs;
    printf("Enter Basic  salary: ");
    scanf("%d",&bs);

    if(bs<1500){
        hra = bs*10/100;
        da = bs*90/100;
    }
    if(bs>=1500){
        hra = 500;
        da = bs*98/100;
    }
    gs = bs + hra + da;
    printf("\nSo the total or Gross salary is : %d\n",gs);
    return 0;
}
