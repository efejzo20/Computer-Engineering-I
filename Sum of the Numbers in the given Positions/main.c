//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,arr1[3000],arr2[5000],sum=0,index;

    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr1[i]);

    scanf("%d",&m);
    for(i=0;i<m;i++)
        scanf("%d",&arr2[i]);

     for(i=0;i<n;i++)
    {
        index=arr1[i];
        sum+=arr2[index-1];
    }

    printf("%d",sum);
    return 0;
}
