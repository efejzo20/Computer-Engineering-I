//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,j,arr[n],cnt=0;

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    j=0;
    while(j<=n)
    {
        if(arr[j]==arr[n-1])
            cnt++;
        j++;
        n--;
    }
    if(cnt>=(n/2.0))
        printf("YES");
    else
        printf("NO");

    return 0;
}
