//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b && a>=c)
    {
        if(b<=c)
            printf("%d",c);

        else
            printf("%d",b);

    }
    else if(b>=a && b>=c)
    {
        if(a<=c)
            printf("%d",c);

        else
            printf("%d",a);
    }

    else if(c>=b && c>=a)
    {
        if(b<=a)
            printf("%d",a);
        else
            printf("%d",b);
    }
    return 0;
}
