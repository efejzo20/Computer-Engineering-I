//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;
    scanf("%f",&x);

    if(x<=-15)
    {
        y=x+3;
        printf("%.1f",y);
    }
    else if(x<=0)
    {
        y=x*x-x;
        printf("%.1f",y);
    }
    else if(x>0)
    {
        y=1.0/x;
        printf("%.1f",y);
    }


    return 0;
}
