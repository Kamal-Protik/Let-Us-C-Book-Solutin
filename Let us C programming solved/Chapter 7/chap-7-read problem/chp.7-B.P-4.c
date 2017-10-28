#include<stdio.h>
#include<stdlib.h>
#define FOUND printf("The Yankee Doodle Virus");

int main()
{
    char signature;

    if(signature == 'Y')
        FOUND
        else
            printf("Safe... as yet !");

    return 0;
}

