#include<stdio.h>
#include<stdlib.h>


int main()
{
    int a;

    printf("\nEnter any Year: ");
    scanf("%d",&a);

    roman(a);
}
roman(int x)
{
    if(x>=1000){
        printf("m");
        roman(x-1000);
    }
    else if(x>=500){
        printf("d");
        roman(x-500);
    }
    else if(x>=100){
        printf("c");
        roman(x-100);
    }
    else if(x>=50){
        printf("l");
        roman(x-50);
    }
    else if(x>=10){
        printf("x");
        roman(x-10);
    }
    else if(x>=5){
        printf("v");
        roman(x-5);
    }
    else if(x>=1){
        printf("i");
        roman(x-1);
    }
}
