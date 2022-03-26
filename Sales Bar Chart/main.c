//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sale,i,j,nr,u;

    for(i=1;i<=3;i++)
    {
        scanf("%d",&sale);
        nr = sale / 100;
        for(j=1;j<=nr;j++)
        {
            printf("*");
        }


    }

    return 0;
}
