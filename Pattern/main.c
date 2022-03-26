//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    int let=64;
    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        for(j=65+i;j<65+n+i;j++)
        {
            printf("%c",j);

        }
        printf("\n");
    }

    return 0;
}
