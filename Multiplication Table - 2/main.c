//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int i,j;
    int cnt;
    scanf("%d%d%d%d",&a,&b,&i,&j);

    for(cnt=i;cnt<=j;cnt++)
    {
        printf("%d %d\n",a*cnt,b*cnt);
    }

    return 0;
}
