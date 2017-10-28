#include<stdio.h>
#include<stdlib.h>

int main()
{
    int xp,yp,xc,yc,d,r;
    printf("Enter the values of the center of xp and yp: ");
    scanf("%d %d",&xp,&yp);
    printf("\nEnter the values of the points of xc and yc: ");
    scanf("%d %d",&xc,&yc);
    printf("\n\nEnter the Radius of the Circle : ");
    scanf("%d",&r);
    d=sqrt(((xp-xc)*(xp-xc))+((yp-yc)*(yp-yc)));
    if(d<r)
        printf("\nThe point is inside the Circle.\n\n");
    if(d==r)
        printf("\nThe point is on the Circle.\n\n");
    if(d>r)
        printf("\nThe point is outside the Circle.\n\n");
    return 0;

}

