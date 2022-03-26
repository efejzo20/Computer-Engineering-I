//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1;
    scanf("%d",&n);

    while(i<=n)
    {
        if((i%3==0)&&(i%5==0))
            printf("Fizz Buzz ");
        else if(i%5==0)
            printf("Buzz ");
        else if(i%3==0)
            printf("Fizz ");
        else
            printf("%d ",i);
        i++;
    }

    return 0;
}
