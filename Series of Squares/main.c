//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1,a=0;
    scanf("%d",&n);
    while(a<=n)
    {
        a=i*i;
        if(a<=n)
            printf("%d ",a);
        i++;
    }

    return 0;
}
