#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *name[] = {
                                "akshay",
                                "parag",
                                "raman",
                                "Srinivas",
                                "gopal",
                                "rajesh"
    };
    int i;
    char *temp;

    printf("\nOriginal: %s %s",name[2],name[3]);

        temp = name[2];
        name[2] = name[3];
        name[3] = temp;

    printf("\nNew: %s %s",name[2],name[3]);
}

