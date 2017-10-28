#include <stdio.h>
#include<stdlib.h>


int main()
{
    printf("\nI am in main.");
    italy();
    printf("\nAnd finally I am in Main.");
}
italy()
{
    printf("\nI am in Italy.");
    brazil();
    printf("\nI am back in Italy.");
}
brazil()
{
    printf("\nI am in Brazil.");
    argentina();
}
argentina()
{
    printf("\nI am in Argentina.");
}





