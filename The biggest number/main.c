//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num,i;
    int big;
    scanf("%d",&n);

    scanf("%d,",&num);
    big=num;

    for(i=1;i<n;i++)
    {
        scanf("%d,",&num);

        if(num>big)
            big=num;
    }
    printf("%d",big);

    return 0;
}
