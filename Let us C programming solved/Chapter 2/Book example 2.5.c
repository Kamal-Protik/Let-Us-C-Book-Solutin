#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sex,ms;
    int age;
    printf("Enter Age , Sex and marital status: ");
    scanf("%d %c %c",&age,&sex,&ms);

    if(ms =='m')
        printf("\nDriver is insured.\n");
    else{
        if(sex =='m'){
            if(age>30)
                printf("\nDriver is insured.\n");
            else
                printf("\nDriver is not insured.\n");
        }
        else{
            if(age>25)
                printf("\nDriver is insured.\n");
            else
                printf("\nDriver is not insured.\n");
        }
    }
    return 0;
}
