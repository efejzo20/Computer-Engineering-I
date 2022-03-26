//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pa,ca;
    int am,price;
    scanf("%d%d",&pa,&ca);
    am=ca-pa;

    if(am<=300)
    {
        price=am*7;
    }
    else if(am>300)
    {
        price=(300*7)+(am-300)*13;
    }
    printf("%d",price);

    return 0;
}
