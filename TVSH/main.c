//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num,am,i;
    double totam,price;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&num,&am);
        if(num==1)
            price=am*0.06;
        else if(num==2)
            price=am*0.1;
        else
            price=am*0.2;

        totam+=price;
    }
    printf("%.2lf",totam);

    return 0;
}
