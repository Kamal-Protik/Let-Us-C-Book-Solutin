#include<stdio.h>
#include<stdlib.h>

int main()
{
    char health,sex,live;
    int age;

    printf("Enter Health condition(p = poor , e = Excellent) and\nsex(m = male , f = female) and\nwhere he/she live(v = village , c = city) : ");
    scanf("%c %c %c",&health,&sex,&live);
    printf("\nEnter his/her age : ");
    scanf("%d",&age);

    if(health == 'e' && (age >= 25 && age <= 35) && live == 'c' && sex == 'm'){
        printf("\nHe is an insured person.");
        printf("\nAnd his premium is Rs. 4 per thousand.\nAnd his policy amount cannot exceed Rs. 2 lakhs.\n");
    }
    else if(health == 'e' && (age >= 25 && age <= 35) && live == 'c' && sex == 'f'){
        printf("\nShe is an insured person.");
        printf("\nAnd her premium is Rs. 3 per thousand.\nAnd her policy amount cannot exceed Rs. 1 lakhs.\n");
    }
    else if(health == 'p' && (age >= 25 && age <= 35) && live == 'v' && sex == 'm'){
        printf("\nHe is an insured person.");
        printf("\nAnd his premium is Rs. 6 per thousand.\nAnd his policy amount cannot exceed Rs. 10,000.\n");
    }
    else
        printf("\nHe/She is not insured.\n");
    return 0;
}
