//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prc,n,sum=0;

    while(prc>=0)
    {
        scanf("%d",&prc);
        if(prc<0)
        {
            break;
        }
        scanf("%d",&n);
        sum=sum+(prc*n);

    }
    printf("%d",sum);
    return 0;
}
