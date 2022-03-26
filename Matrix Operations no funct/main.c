//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d%d",&m,&n);
    int first[101][101],second[101][101],sum[101][101];
    int i,j;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&first[i][j]);
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&second[i][j]);
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            sum[i][j]=first[i][j]+second[i][j];
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",sum[i][j]);
        printf("\n");
    }


    return 0;
}


