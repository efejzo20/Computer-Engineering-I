//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1,j=0;
    scanf("%d",&n);
    int num;

    while(i<=n)
    {
        scanf("%d",&num);
        if(num%3==0)
        {
            j++;
        }
        i++;
    }
    printf("%d",j);

    return 0;
}
