//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    double area,per,c;
    int a,b,r;

    if(n==1)
    {
        scanf("%d",&r);
        per=2*3.14159*r;
        area=3.14159*r*r;
        printf("%.3lf %.3lf",area,per);
    }
    if(n==2)
    {
        scanf("%d%d",&a,&b);
        area=a*b;
        per=2.0*(a+b);
        printf("%.3lf %.3lf",area,per);
    }
    if(n==3)
    {
        scanf("%d%d",&a,&b);
        area=a*b/2.0;
        c=sqrt(((a/2.0)*(a/2.0))+(b*b));
        per=2.0*c+a;
        printf("%.3lf %.3lf",area,per);
    }

    return 0;
}
