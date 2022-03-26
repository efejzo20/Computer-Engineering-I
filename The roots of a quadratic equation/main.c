//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c;
    float d,x,x1,x2;

    scanf("%d %d %d",&a,&b,&c);

    d=b*b-4*a*c;

    if(d<0)
        printf("No real root");
    else if(d==0)
    {
        x=-b/(2*a);
        printf("%f",x);
    }
    else if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("%f %f",x1,x2);
    }



    return 0;
}
