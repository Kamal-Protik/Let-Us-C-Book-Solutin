#include<stdio.h>
#include<stdlib.h>

po(int m,int n)
{
    float i,o=1;
    for(i=1;i<=n;i++)
        o = o*m;
    return o;
}
fact(int k)
{
    int i,l=1;
    for(i=1;i<=k;i++){
        l = l * i;
    }
    return l;
}
sin(float a)
{
    float b=0;
    int i=1,j=1,c=1;
    while(i<=a){
        if(i%2!=0){
            b = b + (po(a,c)/fact(j));
            c = c + 2;
            j = j + 2;
            i++;
        }
        else{
            b = b - (po(a,c)/fact(j));
            c = c + 2;
            j = j + 2;
            i++;
        }
    }
    return b;
}

int main()
{
    float x,y;

    printf("Enter the Value of X: ");
    scanf("%f",&x);

    y = sin(x);
    printf("\nValue of Sin(%0.2f)= %0.2f\n",x,y);
}



