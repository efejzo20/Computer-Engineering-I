//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,cnt=0,i,j;
    int isPrime;
    scanf("%d%d",&n1,&n2);

    for(i=n1; i<=n2; i++)
    {
        for (j = 2; j <= i / 2; ++j)
        {
            if (i % j == 0)
            {
                isPrime=0;
                break;
            }

        }

        if(isPrime=1)
        {
            sum+=i;
            printf("%d",sum)
        }
        else
            printf("No");

        return 0;
    }
