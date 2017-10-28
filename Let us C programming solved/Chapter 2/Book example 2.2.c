#include<stdio.h>
#include<stdlib.h>

int main()
{
    int bonus,cy,yoj,yr_of_ser;
    printf("Enter current year and year of joining: ");
    scanf("%d %d",&cy,&yoj);

    yr_of_ser = cy - yoj;
    if(yr_of_ser > 3){
        bonus = 2500;
        printf("\nBonus = %d\n",bonus);
    }
    else{
        printf("\nNo bonus Bakwas\n");
    }
    return 0;
}
