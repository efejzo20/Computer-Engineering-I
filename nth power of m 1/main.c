//efejzo20
#include <stdio.h>
#include <stdlib.h>
int pow(int n,int m);

int main()
{
    int n,m,sum;
    scanf("%d%d",&n,&m);
    sum=pow(n,m);
    printf("%d",sum);

    return 0;
}
int pow(int n,int m)
{
    int i=n,s=1;
    for(i=n;i!=0;i--)
    {
        s *= m;
    }
    return s;
}
