#include<stdio.h>
#include<stdlib.h>

int main()
{
     int ram,shyam,ajay,young;
     printf("Enter the age of Ram, Shyam and Ajay: ");
     scanf("%d %d %d",&ram,&shyam,&ajay);

     if(ram<shyam && ram<ajay)
        printf("\nRam is youngest.\n");
     if(shyam<ram && shyam<ajay)
        printf("\nShyam is youngest.\n");
     if(ajay<ram && ajay<shyam)
        printf("\nAjay is youngest.\n");
     return 0;
}

