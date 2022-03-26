//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int h,min,s,dif;
    h=n/3600;
    dif=n-h*3600;
    min=dif/60;
    dif=dif-min*60;
    s=dif;
    printf("%d %d %d",h,min,s);



    return 0;
}
