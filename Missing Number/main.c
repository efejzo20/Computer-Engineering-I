//efejzo20
#include <stdio.h>
#include <stdlib.h>
int sum(int n);

int main()
{
    int n,miss;
    int s1,s2,dif;
    scanf("%d",&n);

    dif=sum(n)-sum(n-1);
    printf("%d",dif);

    return 0;
}
int sum(int n)
{
    int num,i,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        sum=sum+num;
    }
    return sum;
}
