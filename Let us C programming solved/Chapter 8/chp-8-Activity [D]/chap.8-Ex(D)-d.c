#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[101];
    int i,j,flag;

    for(i=0;i<=100;i++){
        a[i] = i;
    }

    for(i=2;i<=100;i++){
        for(j=2;j<=a[i]/2;j++){
                flag = 0;
            if(a[i]%j==0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            printf("\n%d is prime...",a[i]);
        }
        else
            printf("\n%d is not prime...",a[i]);
    }
}



