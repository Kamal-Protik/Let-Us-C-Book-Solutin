#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define FOUND 1
#define NOTFOUND 0

int main()
{
    char masterlist[6][10] = {
                                "akshay",
                                "parag",
                                "raman",
                                "Srinivas",
                                "gopal",
                                "rajesh"
    };

    int i,flag,a;

    char yournamme[10];

    printf("Enter your name: ");
    scanf("%s",yournamme);

    flag = NOTFOUND;
    for(i=0;i<=5;i++){
        a = strcmp(&masterlist[i][0],yournamme);
        if(a==0){
            printf("\nWelcome you can enter this place.\n");
            flag = FOUND;
            break;
        }
    }
    if(flag==0){
        printf("\nSorry you are trespasser.\n");
    }
}

