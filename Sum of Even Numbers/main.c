//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum=0;
    scanf("%d%d",&a,&b);
    while(a<=b)
    {
        if(a%2==0)
        {
            sum=sum+a;
        }
        a++;
    }
    printf("%d",sum);

    return 0;
}
