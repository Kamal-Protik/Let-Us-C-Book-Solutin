#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x1,x2,x3,y1,y2,y3,s_line;
    printf("Enter the values of x1 , x2 and x3 : ");
    scanf("%d %d %d",&x1,&x2,&x3);
    printf("\nEnter the values of y1 , y2 and y3 : ");
    scanf("%d %d %d",&y1,&y2,&y3);

    if((x2-x1)*(x3-x1)+(y2-y1)*(y3-y1)==0)
        printf("\nThe three points are fall in a straight line.\n");
    else
        printf("\nThe three points are not fall in a straight line.\n");
    return 0;
}

