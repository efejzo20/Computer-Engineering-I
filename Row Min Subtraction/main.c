//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int list[m];

    for(i=0;i<n;i++)
    {
        int min=10001;
        for(j=0;j<m;j++)
        {
            scanf("%d",&list[j]);
            if(list[j]<min)
                min=list[j];
        }
        for(j=0;j<m;j++)
        {
            list[j]=list[j]-min;
            printf("%d ",list[j]);

        }
        printf("\n");
    }

    return 0;
}
