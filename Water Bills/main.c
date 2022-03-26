//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,wa;
    scanf("%d",&n);
    int i=0;
    double price,sum=0;

    while(i<n)
    {
        scanf("%d",&wa);
        if(wa<=4000)
            price=10;
        else
            price=10+((wa-4000)*0.005);
        sum=sum+price;
        i++;
    }
    printf("%.3lf",sum);

    return 0;
}
