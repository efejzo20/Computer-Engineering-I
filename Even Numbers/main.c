//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i=n;
    if(n>50)
        {
            printf("Wrong Input");
        }

    while(i<=50)
    {

        if(n%2!=0)
        {
            printf("Wrong Input");
            break;
        }

        if(n<=0)
        {
            printf("Wrong Input");
            break;
        }
        if(n==50)
            {
            printf("Wrong Input");
            break;
            }
        printf("%d ",i);
        i=i+2;
    }

    return 0;
}
