#include<stdio.h>
#include<stdlib.h>

/*int main()
{
    int i,j,n=5;
    char k,l='A';

    for(i=1;i<=5;i++){
        for(j=n-1;j>=i;j--){
            printf(" ");
        }
        for(k='A';k<=l;k++){
            printf("%c",k);
        }
        printf("\n");
        l++;
    }
    return 0;
}*/
int main()
{
    int i,j,n=71,k,l=1,m;

    for(i=71;i>=65;i--){
        for(j=65;j<=i;j++){
            printf("%c",j);
        }
        for(m=1;m<=l;m++){
            printf(" ");
        }
        for(k=n;k>=65;k--){
            printf("%c",k);
        }
        printf("\n");
        n--;
        l=l+2;
    }
    return 0;
}
