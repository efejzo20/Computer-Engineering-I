//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int getpop(int n);

int main()
{
    int n,j,num,i;
    int year=1900;

    for(j=1; j<=3; j++)
    {
        scanf("%d",&n);
        num=getpop(n);
        printf("%d ",year);
        for(i=1; i<=num; i++)
        {
            printf("*");
        }
        printf("\n");
        year+=50;
    }
    return 0;
}

int getpop(int n)
{
    float numA;
    numA=round(n/1000.0);

    return numA;
}
