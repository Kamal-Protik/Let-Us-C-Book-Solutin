#include <stdio.h>
#include<stdlib.h>

int main()
{
    int matchsticks=21,user,computer;
    printf("Do not Enter invalid Numbers.\nNumbers above 4 are invalid.");
    printf("\nIf you do so,the computer automatically wins.");

    while(matchsticks>=1)
    {
        printf("\nNumber of matchsticks available right now is %d",matchsticks);
        printf("\n\nYour Turn...\n\n\n");

        printf("\nPick up the matchsticks(s)--(1-4): ");
        scanf("%d",&user);

        if(user>4)
        {
            printf("Invalid selection");
            break;
        }
        computer=5-user;
        printf("\nComputer's Turn...\n");
        printf("\n\nComputer chooses: %d",computer);

        matchsticks = matchsticks-user-computer;
        if(matchsticks==1)
            break;
    }

    printf("\nComputer Wins.");
    return 0;
}
