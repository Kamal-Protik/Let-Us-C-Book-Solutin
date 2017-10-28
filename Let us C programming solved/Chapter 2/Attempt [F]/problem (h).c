#include<stdio.h>
#include<stdlib.h>

int main()
{
    float time;
    printf("Enter the time: ");
    scanf("%f",&time);

    if(time>=2 && time<=3)
        printf("\nThe worker is said to be highly efficient.\n");
    if(time>3 && time<=4)
        printf("\nThe worker is ordered to improve speed.\n");
    if(time>4 && time<=5)
        printf("\nThe worker is given training to improve his speed.\n");
    if(time>5)
        printf("\nThe worker has to leave the company.\n");
    return 0;
}

