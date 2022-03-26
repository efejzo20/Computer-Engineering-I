//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char p1[10];
    char p2[10];
    scanf("%s %s",&p1,&p2);

    if(!strcmp(p1,"Rock") &&!strcmp(p2,"Paper"))
        printf("Player2 wins");
    if(!strcmp(p1,"Paper") &&!strcmp(p2,"Rock"))
        printf("Player1 wins");

    if(!strcmp(p1,"Rock") &&!strcmp(p2,"Scissors"))
        printf("Player1 wins");
    if(!strcmp(p1,"Scissors") &&!strcmp(p2,"Rock"))
        printf("Player2 wins");

    if(!strcmp(p1,"Paper") &&!strcmp(p2,"Scissors"))
        printf("Player2 wins");
    if(!strcmp(p1,"Scissors") &&!strcmp(p2,"Paper"))
        printf("Player1 wins");

    if(!strcmp(p1,"Rock") &&!strcmp(p2,"Rock"))
        printf("You tied");

    if(!strcmp(p1,"Paper") &&!strcmp(p2,"Paper"))
        printf("You tied");

    if(!strcmp(p1,"Scissors") &&!strcmp(p2,"Scissors"))
        printf("You tied");

    return 0;
}
