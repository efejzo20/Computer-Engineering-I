//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int i=n,s=1;

    while(i != 0)
    {
        s *= m;
        i--;
    }
    printf("%d",s);
    return 0;
}
