//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    char c;
    scanf("%d %c",&n,&c);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%c ",c);
        printf("\n");
    }

    return 0;
}
