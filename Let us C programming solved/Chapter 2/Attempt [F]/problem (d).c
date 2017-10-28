#include<stdio.h>
#include<stdlib.h>

int main()
{
    float hardness,carbon_content,tensile_strength;
    printf("Enter Hardness , Carbon content and Tensile Strength: ");
    scanf("%f %f %f",&hardness,&carbon_content,&tensile_strength);

    if(hardness>50 && carbon_content<0.7 && tensile_strength>5600)
        printf("\nThe Grade is 10.\n");
    else if(hardness>50 && carbon_content<0.7)
        printf("\nThe Grade is 9.\n");
    else if(carbon_content<0.7 && tensile_strength>5600)
        printf("\nThe Grade is 8.\n");
    else if(hardness>50 && tensile_strength>5600)
        printf("\nThe Grade is 7.\n");
    else if(hardness>50 || carbon_content<0.7 || tensile_strength>5600)
        printf("\nThe Grade is 6.\n");
    else
        printf("\nThe Grade is 5.\n");
    return 0;
}

