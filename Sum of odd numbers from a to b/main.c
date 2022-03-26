//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int sum=0,cnt;
    scanf("%d%d",&a,&b);
    cnt=a;
    while(cnt<=b)
    {
        if(cnt%2!=0)
            sum=sum+cnt;
        cnt++;
    }
    printf("%d",sum);
    return 0;
}
