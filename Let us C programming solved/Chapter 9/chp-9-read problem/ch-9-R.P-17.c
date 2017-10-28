#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char name[][10] = {
                                "akshay",
                                "parag",
                                "raman",
                                "Srinivas",
                                "gopal",
                                "rajesh"
    };
    int i;
    char t;

    printf("\nOriginal: %s %s",&name[2][0],&name[3][0]);

    for(i=0;i<=9;i++){
        t = name[2][i];
        name[2][i] = name[3][i];
        name[3][i] = t;
    }

    printf("\nNew: %s %s",&name[2][0],&name[3][0]);
}
