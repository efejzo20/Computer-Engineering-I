//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,s=0,i=1;
    scanf("%d",&n);

    while(i<=n)
    {
        scanf("%d%d",&a,&b);
        s=s+(a*b);
        i++;
    }
    printf("%d",s);

    return 0;
}
