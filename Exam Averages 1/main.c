//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,arr[10000][50];
    float ave;

    scanf("%d%d",&n,&m);

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(j=0; j<m; j++)
    {
        int sum=0,cnt=0;
        for(i=0; i<n; i++)
        {
            if(arr[i][j]>0)
            {
                sum+=arr[i][j];
                cnt++;
            }
        }
        ave=(float)sum/cnt;
        printf("%.2f ",ave);
    }


    return 0;
}
