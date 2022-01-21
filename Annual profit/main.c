//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double P1,Q1,v1,FC1;
    double P2,Q2,v2,FC2;
    double profit1,profit2,sum;
    scanf("%lf%lf%lf%lf",&P1,&Q1,&v1,&FC1);
    scanf("%lf%lf%lf%lf",&P2,&Q2,&v2,&FC2);
    profit1=P1*Q1 - (v1*Q1 + FC1);
    profit2=P2*Q2 - (v2*Q2 + FC2);
    sum=profit1+profit2;
    printf("%lf",sum);
    return 0;
}
