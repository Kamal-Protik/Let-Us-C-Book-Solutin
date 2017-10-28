#include <stdio.h>
#include<stdlib.h>


int main()
{
    int cls,s1,s2,s3,f1,f2,f3,sum1,sum2,sum3,g1,g2,g3;
    while(1){
        printf("\n1. First Class.");
        printf("\n2. Second Class.");
        printf("\n3. Third Class.");
        printf("\n4. Exit.");

        printf("\nSelect class: ");
        scanf("%d",&cls);

        switch(cls){
    case 1:
        printf("\nNumber of Subjects: ");
        scanf("%d",&s1);
        printf("\nHow many Subjects he/she was failed: ");
        scanf("%d",&f1);

        printf("\nSum of Total Marks is : ");
        scanf("%d",&sum1);

        if(f1>3)
            printf("\nNo grace can added.");
        if(f1<=3)
        {
            g1 = (s1*5)+sum1;
            printf("\nSo the total number with grace is : %d",g1);
        }
        break;
    case 2:
        printf("\nNumber of Subjects: ");
        scanf("%d",&s2);
        printf("\nHow many Subjects he/she was failed: ");
        scanf("%d",&f2);

        printf("\nSum of Total Marks is : ");
        scanf("%d",&sum2);

        if(f2>2)
            printf("\nNo grace can added.");
        if(f2<=2)
        {
            g2 = (s2*4)+sum2;
            printf("\nSo the total number with grace is : %d",g2);
        }
        break;
    case 3:
        printf("\nNumber of Subjects: ");
        scanf("%d",&s3);
        printf("\nHow many Subjects he/she was failed: ");
        scanf("%d",&f3);

        printf("\nSum of Total Marks is : ");
        scanf("%d",&sum3);

        if(f3>1)
            printf("\nNo grace can added.");
        if(f3<=1)
        {
            g3 = (s3*5)+sum3;
            printf("\nSo the total number with grace is : %d",g3);
        }
        break;
    case 4:
        exit(0);
        }
    }
    return 0;
}




