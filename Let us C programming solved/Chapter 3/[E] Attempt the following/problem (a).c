#include <stdio.h>
#include<stdlib.h>

int main()
{
  int n,j,i,flag;
  printf("How many time you want to test : ");
  scanf("%d",&n);
  for(j=1;j<=n;j++){
        flag=0;
    for(i=2;i<=j-1;++i)
  {
      if(j%i==0)
      {
          flag=1;
          break;
      }
  }
  if (flag==0)
      printf("\n%d is a prime number.\n",j);
  else
      printf("\n%d is not a prime number.\n",j);
  }

  return 0;
}
