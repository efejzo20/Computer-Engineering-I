//efejzo20
#include <stdio.h>
#include <stdlib.h>
double calcTax(int num,double prc, double taxP);

int main()
{
    int n,num,i;
    double prc,taxP,tax=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d%lf%lf",&num,&prc,&taxP);
        tax+=calcTax(num,prc,taxP);
    }
    printf("%.3lf",tax);

    return 0;
}
double calcTax(int num,double prc, double taxP)
{
    double itemPrc,tax;
    itemPrc=num*prc;
    tax=itemPrc-(itemPrc/(taxP+1));

    return tax;
}
