//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    printf("Enter today's day");
    scanf("%d",&n1);
    printf("Enter the number of days elapsed since today");
    scanf("%d",n2);

    switch(n1)
    {
        case 1:
            printf("Today is Monday ");
            if(n==1)
                printf("and the future day is Tuesday")
            break;
        case 2:
            printf("Today is Tuesday");
            break;
        case 3:
            printf("Today is Wednesday");
            break;
        case 4:
            printf("Today is Thursday");
            break;
        case 5:
            printf("Today is Friday");
            break;
        case 6:
            printf("Today is Saturday");
            break;
        case 7:
            printf("Today is Sunday");
            break;
        default:
            printf("Invalid input! Please enter week number between 1-7.");
    }


    return 0;
}
