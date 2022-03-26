//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,i,cnt=0;

    scanf("%d%d",&n,&x);

    int numbers[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
    }

    for(i=0;i<n;i++)
    {
        if(numbers[i]==x)
            cnt++;
    }
    if(cnt>0)
        printf("Yes");
    else
        printf("No");


    return 0;
}
