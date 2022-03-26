//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double PV,t,r;
    scanf("%lf%lf",&PV,&t);
    double FV;

    if(t<1)
    {
        r=0;
    }
    else if(t<=3)
    {
        r=0.057;
    }
    else if(t>3)
    {
        r=0.126;
    }

    FV=PV*(1+(r*t));

    printf("%.2lf",FV);

    return 0;
}
