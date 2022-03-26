//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,j,m,n,i,l,a[100][100]= {0};
    scanf("%d%d%d%d",&k,&j,&m,&n);

    for(i=j; i<n+j; i++)
    {
        for(l=k; l<m+k; l++)
        {
            scanf("%d",&a[i][l]);
        }
    }

    for(i=0; i<n+j+j; i++)
    {
        for(l=0; l<m+k+k; l++)
        {
            printf("%d ",a[i][l]);
        }
        printf("\n");
    }

    return 0;
}
