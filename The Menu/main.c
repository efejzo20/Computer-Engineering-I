//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    scanf("%d",&choice);
    if(choice==1)
        printf("Here is your Coke");
    else if(choice==2)
        printf("Here is your Water");
    else if(choice==3)
        printf("Here is your Sprite");
    else if(choice==4)
        printf("Here is your Bravo");
    else if(choice==5)
        printf("Here is your Fanta");
    else
        printf("Wrong Input");
    return 0;
}
