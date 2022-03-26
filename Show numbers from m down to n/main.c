//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,k;
    scanf("%d%d%d",&m,&n,&k);


    for( ; m>=n; m-=k)
    {
        printf("%d ",m);

    }

        return 0;
    }
