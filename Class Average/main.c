//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i=1;
    int a,b,c;
    scanf("%d",&n);
    float ave,class_ave,sum;

    while(i<=n)
    {
        scanf("%d%d%d",&a,&b,&c);
        ave=round((a+b+c)/3.0);
        sum=sum+ave;
        i++;
    }
    class_ave=sum/n;
    printf("%.3f",class_ave);

    return 0;
}
