//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,pg;
    int price,sum=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&pg);
        if(pg<=10)
            price=pg*5;
        else if(pg<=20)
            price=pg*3;
        else
            price=pg*2;
        sum+=price;
    }
    printf("%d",sum);

    return 0;
}
