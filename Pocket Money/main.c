//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    int sum,am;
    sum=a+b+c+d+e+f;

    if(sum<70)
        am=100;
    else if(sum<=200)
        am=sum*2;
    else
        am=400+(sum-200)*4;

    printf("%d",am);

    return 0;
}
