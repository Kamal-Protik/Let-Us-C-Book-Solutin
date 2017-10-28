#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter the value of a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);

    if((a>b && a>c)?printf("\nA is greatest.\n"):((b>a && b>c)?printf("\nB is greatest.\n"):printf("\nC is greatest.\n")))

    return 0;
}

