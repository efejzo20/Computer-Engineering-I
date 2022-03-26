//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,n;
    int grade,sum=0,cnt=0,i;
    scanf("%d%d",&k,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&grade);
        if(grade>k)
        {
            cnt++;
            sum=sum+grade;
        }
    }
    printf("%d %d",cnt,sum);
    return 0;
}
