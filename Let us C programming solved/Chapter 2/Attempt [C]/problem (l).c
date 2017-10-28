#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y;
    printf("Enter the x and y coordinates of a point: ");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0)
        printf("\nPoints lies on the origin.\n");
    else if(x==0 && y!=0)
        printf("\nPoints lies on the Y axis.\n");
    else if(x!=0 && y==0)
        printf("\nPoints lies on the X axis.\n");
    else
        printf("\nPoints does not lies on any axis,nor origin.\n");
    return 0;
}

