#include<stdio.h>
#include<stdlib.h>

int main()
{
    float Bangla,English,Mathematics,Social_science,General_science,total_mark,total_percentage;
    printf("Enter the mark of Bangla: \n");
    scanf("%f",&Bangla);
    printf("Enter the mark of English: \n");
    scanf("%f",&English);
    printf("Enter the mark of Mathematics: \n");
    scanf("%f",&Mathematics);
    printf("Enter the mark of Social science: \n");
    scanf("%f",&Social_science);
    printf("Enter the mark of General science: \n");
    scanf("%f",&General_science);
    total_mark = Bangla+English+Mathematics+Social_science+General_science;
    total_percentage = (total_mark/500)*100;
    printf("\n\nSo the total or aggregate mark is %0.2f which is %0.2f percent\n",total_mark,total_percentage);
    return 0;

}
