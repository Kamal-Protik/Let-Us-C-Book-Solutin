/* Missing Condition (b) */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b;
    printf("Enter the marks of Main subject A and Subsidiary subject B: ");
    scanf("%d %d",&a,&b);

    if(a>=55 && b>=45)
        printf("\nThe student is passed and He/She is Qualified for a degree.\n");
    else if(a>=65 && b<45)
        printf("\nHe/She is Allowed to reappear in an Examination in B to qualify.\n");
    else
        printf("\nHe/She is failed.\n");
    return 0;
}

