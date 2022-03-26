//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1,courseAv,numHours,sum=0,h=0;
    float ave;
    scanf("%d",&n);

    while(i<=n)
    {
        scanf("%d%d",&courseAv,&numHours);
        sum=sum+(courseAv*numHours);
        h=h+numHours;
        i++;
    }

    ave=sum/(float)h;
    printf("%.2f",ave);

    return 0;
}
