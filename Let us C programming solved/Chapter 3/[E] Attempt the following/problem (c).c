#include <stdio.h>
#include<stdlib.h>


int main()
{
   float n,i,j,fact_i;
   float add_result=0;
   printf("How many times to add this series: ");
   scanf("%f",&n);

   for(i=1;i<=n;i++){
       fact_i = 1;
    for(j=i;j>=1;j--){
       fact_i = fact_i*j;
    }
    add_result = add_result + ((float)i/(float)fact_i);
    printf("%0.0f ",fact_i);
   }
   printf("\n\n%0.2f",add_result);
   return 0;
}
