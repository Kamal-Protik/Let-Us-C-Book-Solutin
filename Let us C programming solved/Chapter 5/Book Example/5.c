#include <stdio.h>
#include<stdlib.h>

int main()
{
    fun();
}
fun()
{
    char ch;

    printf("\nEnter any alphabet : ");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90)
        return(ch);// For printing this character value you just type "printf("%c",ch)" that's it.
    else
        return(ch + 32);// For printing this character value you just type "printf("%c",ch)" that's it.
}




