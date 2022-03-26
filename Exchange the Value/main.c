//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=a;
    d=b;
    b=c;
    a=d;
    printf("%d %d",a,b);

    return 0;
}
