//efejzo20
#include <stdio.h>
#include <stdlib.h>
int PowFunc(int m, int n);

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    printf("%d", PowFunc(m,n));

    return 0;
}

int PowFunc(int m, int n)
{
    if(n==0)
        return 1;
    return m*PowFunc(m, n-1);
}
