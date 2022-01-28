//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,f;
    int i,d;
    char name[15];
    int sum=0;

    scanf("%d%d",&n,&f);

    for(i=0;i<n;i++)
    {
        scanf("%s%d",name,&d);
        sum=sum+d;
        if(sum>=f)
            printf("%s",name);

    }
    if(sum<f)
        printf("%d",sum);

    return 0;
}
