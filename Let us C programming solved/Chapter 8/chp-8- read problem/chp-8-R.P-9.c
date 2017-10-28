#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[] = {10,20,36,72,45,36};
    int *j,*k;

    j = &arr[4];
    k = (arr+3);

    printf("j = %d\n",j);
    printf("k = %d\n",k);

    if(j==k)
        printf("The two pointers point to the same location. %d",j);
    else
        printf("The two pointers do not point to the same loacation. %d",k);
}

