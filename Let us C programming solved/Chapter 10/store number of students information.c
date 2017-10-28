#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct student
    {
        char std_name[20];
        int std_ID;
        char std_sec[10];
    };
    struct student s[10];
    int i;

    for(i=0;i<=3;i++){
        scanf("%[^\n]s",&s[i].std_name);
        getchar();
        scanf("%d",&s[i].std_ID);
        getchar();
        scanf("%[^\n]s",&s[i].std_sec);
        getchar();
    }


    printf("\nAnd the outputs are given below: \n");
    for(i=0;i<=3;i++){
        printf("%s %d %s\n",s[i].std_name,s[i].std_ID,s[i].std_sec);
    }

}

