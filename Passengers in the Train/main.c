//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,n;
    scanf("%d%d",&k,&n);
    int i=1;
    int out,in;
    int s;
    while(i<=k)
    {
        scanf("%d%d",&out,&in);
        n=n-out;
        n=in+n;
        i++;
    }
    printf("%d",n);
    return 0;
}
