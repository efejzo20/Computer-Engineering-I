//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i,talkTime;
    int price, sum=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&talkTime);
        price=calcPrice(talkTime);
        sum+=price;
    }
    printf("%d",sum);

    return 0;
}
int calcPrice(int t)
{
    int res;
    if(t <= 120)
        res=100;
    else
        res=100+ ceil((t-120)/10.0)*5;
    return res;
}

