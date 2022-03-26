//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1,sum=0,a;
    scanf("%d",&n);

    while(i<=n)
    {
        a=i*i*i;
        sum=sum+a;
        i++;
    }

    printf("%d",sum);

    return 0;
}
