//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int list[n][m];

    for(i=0;i<n;i++)
    {
        int min=10001;
        for(j=0;j<m;j++)
        {
            scanf("%d",&list[i][j]);

        }

    }

    int Minimum[n];

    for(i=0;i<n;i++)
    {
        int min=10001;

        for(j=0;j<m;j++)
        {
            if(list[i][j]<min)
                min=list[i][j];
        }
        Minimum[i]=min;
    }


    for(i=0;i<n;i++)
    {
        int min=10001;
        for(j=0;j<m;j++)
        {
            list[i][j]-=Minimum[i];
            printf("%d ",list[i][j]);
        }
        printf("\n");

    }


    return 0;
}
