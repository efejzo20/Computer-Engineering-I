//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    int i,cnt=0;

    for(i=0;i<3;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(c*c==a*a+b*b)
            cnt++;
    }

    printf("%d",cnt);

    return 0;
}
