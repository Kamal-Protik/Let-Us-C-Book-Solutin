#include <stdio.h>
#include<stdlib.h>

int main()
{
    int choice;
    int f,g,fact_num;
    int p;
    int o;


    while(1){
        printf("\n1. Factorial.");
        printf("\n2. Prime or not.");
        printf("\n3. Odd or even.");
        printf("\n4. Exit.");
        printf("\n\nSelect your choice: ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            fact_num=1;
            printf("\nInput a number: ");
            scanf("%d",&f);
            for(g=1;g<=f;g++){
                fact_num = fact_num * g;
            }
            printf("\nFactorial value of inputed number is: %d",fact_num);
            break;
        case 2:
            printf("\nInput a number to check prime or not: ");
            scanf("%d",&p);

            if((p%2!=0 || p%3!=0) && p%1==0 && p%p==0){
                printf("\nThis number is a Prime Number.");
            }
                else
                    printf("\nThis number is not a Prime number.");
                    break;
        case 3:
            printf("\nInput a number to check odd or even: ");
            scanf("%d",&o);

            if(o%2==0)
                printf("\nThis number is an Even number.");
            else
                printf("\nThis number is odd number.");
                break;
        case 4:
            exit(0);
        }
    }

    return 0;
}
