#include<stdio.h>
#include<stdlib.h>

int main()
{
     int m1,m2,m3,m4,m5,original_number,reversed_number;
     printf("Enter the five-digit numbers: ");
     scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
     printf("\nSo the reverse numbers are: %d%d%d%d%d",m5,m4,m3,m2,m1);
     if(m5==m1 && m4==m2 && m3==m3)
        printf("\n\nThe original and reverse numbers are equal.\n\n");
     else
        printf("\n\nThe original and reverse numbers are not equal.\n\n");

    return 0;
}

