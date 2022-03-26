//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int stone,pound,ounce;
    int ton,kg,gr;

    scanf("%d%d%d",&stone,&pound,&ounce);
    double s,p,o,sum;
    s=stone*14*16*28.3495;
    p=pound*16*28.3495;
    o=ounce*28.3495;
    sum=s+p+o;

    ton=sum/10000000;
    kg=(sum-ton*10000000)/1000;
    gr=round(sum-ton*10000000)-kg*1000;

    printf("%d %d %d",ton,kg,gr);

    return 0;
}
