#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,male,literate_male,literacy,literate_female,female,illiterate_male,illiterate_female,total_illiterate_male,total_illiterate_female;// n = Total population
    printf("Total Population = ");
    scanf("%d",&n);

    printf("\nThe percentage of male among the whole population is : ");
    scanf("%d",&male);

    female = 100 - male;
    printf("\nSo the percentage of female among the whole population is : %d\n",female);

    printf("\nThe percentage of total literacy is : ");
    scanf("%d",&literacy);

    printf("\nThe percentage of total literate male is : ");
    scanf("%d",&literate_male);

    literate_female= literacy - literate_male;
    printf("\n\nSo the percentage of total literate female is : %d",literate_female);

    illiterate_male = male - literate_male;
    printf("\n\nTotal percentage of illiterate male is : %d",illiterate_male);

    illiterate_female = female - literate_female;
    printf("\n\nTotal percentage of illiterate female is : %d\n",illiterate_female);
    total_illiterate_male = (n*illiterate_male)/100;
    total_illiterate_female = (n*illiterate_female)/100;
    printf("\nSo the total number of illiterate male is : %d\nAnd the total number of illiterate female is : %d\n",total_illiterate_male,total_illiterate_female);
    return 0;
}

