//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3;
    scanf("%d%d%d",&n1,&n2,&n3);
    int dif1,dif2,dif3;
    if(n1>n2)
    {
        dif1=n1-n2;
    }
    else
    {
        dif1=n2-n1;

    }
    if(n1>n3)
    {
        dif2=n1-n3;
    }
    else
    {
        dif2=n3-n1;
    }

    if(n2>n3)
    {
        dif3=n2-n3;
    }
    else
    {
        dif3=n3-n2;
    }

    if(dif1<=dif2 && dif1<=dif3)
        printf("%d %d",n1,n2);
    else if(dif2<=dif1 && dif2<=dif3)
        printf("%d %d",n1,n3);
    else
        printf("%d %d",n2,n3);

    return 0;
}
