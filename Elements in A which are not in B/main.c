//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,cnt=0;
    printf("n:");
    scanf("%d",&n);
    int a[n],b[n];

    printf("a:");

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("b:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&b[i]);
    }


    for(i=0; i<n; i++)
    {
        cnt=0;
        for(j=0; j<n; j++)
        {
            if(a[i]==b[j])
            {
                cnt++;
                break;
            }

        }
        if(cnt==0)
            printf("%d ",a[i]);
    }

    return 0;
}
