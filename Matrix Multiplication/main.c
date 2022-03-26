//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,k;
    int i,j,l;
    scanf("%d%d%d",&m,&n,&k);

    int a[101][101],b[101][101],c[101][101];

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
            scanf("%d",&b[i][j]);
    }


    //for c
    for(i=0;i<m;i++)
    {
        for(j=0;j<k;j++)
        {
            c[i][j]=0;
            for(l=0;l<n;l++)
            {
                c[i][j]+=(a[i][l]*b[l][j]);
            }

        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<k;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
