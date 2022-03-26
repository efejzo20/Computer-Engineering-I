//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, m, i, j;

    printf("Enter rows:");
    scanf("%d",&n);
    printf("Enter columns:");
    scanf("%d",&m);

    int a[n][m];
    int max=-999999, min=999999,sum=0;
    float ave,standardDeviation,sum2=0,mean;
    printf("Enter the elements:");

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
            sum+=a[i][j];
            if(a[i][j]>max)
                max = a[i][j];
            if(a[i][j]<min)
                min = a[i][j];
        }
    }
    ave=(float)sum/(m+n);
    mean=sum/n+m;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            sum2+=pow(a[i][j]-mean, 2);
        }
    }
    standardDeviation=sqrt(sum2/n);

    printf("%d %d %f %f",max,min,ave,standardDeviation);

    return 0;
}
