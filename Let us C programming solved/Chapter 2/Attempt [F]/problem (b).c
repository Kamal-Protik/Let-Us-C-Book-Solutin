#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    printf("Enter anything: ");
    scanf("%c",&ch);

    if((ch>='A' && ch<='Z') || (ch>=65 && ch<=90))
        printf("\n%c is an Upper case letter\n",ch);
    if((ch>='a' && ch<='z') || (ch>=97 && ch<=122))
        printf("\n%c is a lower case letter\n",ch);
    if(ch>=48 && ch<=57)
        printf("\nThis is a digit\n");
    if((ch>=0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127))
        printf("\n%c is a special symbols.\n",ch);
    return 0;
}

