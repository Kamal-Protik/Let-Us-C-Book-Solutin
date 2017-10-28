// if you are try to get exact value then please replace all the data type from int to float...

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a[3][3];
    int i,j,s,sum;

    printf("Enter a 3 x 3 Matrix: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

    s = 0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            s = s + (a[i][j]*a[i][j]);
        }
    }
    sum = sqrt(s);
    printf("\nThe norm of this given Matrix is : %d\n",sum);
}
// if you are try to get exact value then please replace all the data type from int to float...

