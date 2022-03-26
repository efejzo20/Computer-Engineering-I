//efejzo20
#include <stdio.h>
#include <stdlib.h>
double totalDiscountRate(double TotsaleAmount, double actual);

int main()
{
    int n,i;
    double saleAmount,discountRate;
    double TsaleAmount=0,Tactual=0;
    double total;
    double actual;

    scanf("%d",&n);

    for(i=1; i<n; i++)
    {
        scanf("%lf%lf",&saleAmount,&discountRate);
        actual=saleAmount-discountRate;
        Tactual+=actual;
        TsaleAmount+=saleAmount;
    }
    total = totalDiscountRate(TsaleAmount,Tactual);

    printf("%lf",total);

    return 0;
}
double totalDiscountRate(double TotsaleAmount, double actual)
{
    double tot;
    tot=100-(TotsaleAmount)/actual*100;

    return tot;
}
