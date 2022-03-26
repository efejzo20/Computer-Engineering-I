//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%5==0)
            printf("%d ",i);
        i++;
    }

    return 0;
}
