//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num;
    int i,sum=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&num);
        if(num%2!=0)
            sum+=num;
    }
    printf("%d",sum);

    return 0;
}
