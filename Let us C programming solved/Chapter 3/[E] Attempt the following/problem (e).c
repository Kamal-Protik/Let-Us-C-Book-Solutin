#include <stdio.h>
#include<stdlib.h>


int main()
{
   float i,x,y;

   printf("y\tx\ti\n\n");
   for(y=1;y<=6;y++){
    for(x=5.5;x<=12.5;x+=0.5){
        i = 2+(y+(0.5*x));
        printf("%0.0f\t%0.2f\t%0.2f\n",y,x,i);
    }
   }
   return 0;
}

