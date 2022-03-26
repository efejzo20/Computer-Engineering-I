//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1;
    scanf("%d",&n);
    while(n>=0)
    {
        while(i<=n)
        {
            printf("*");
            i++;
        }
        printf("\n");
        n=n-1;
        i=1;
    }

    return 0;
}
