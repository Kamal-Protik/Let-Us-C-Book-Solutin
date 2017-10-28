#include<stdio.h>
#include<stdlib.h>

int main()
{
    char x;
    for(x=0;x<=255;x++)
        printf("\nAscii value %d Character %c",x,x);
    return 0;
}
//Correct program is given below;
/*int main()
{
    int x;
for(x=0;x<=255;x++)
    printf("\nAscii value %d Character %c",x,x);
    return 0;

}*/


