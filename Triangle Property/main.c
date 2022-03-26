//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1,b1,c1;
    int a2,b2,c2;
    int a3,b3,c3;
    int i=0;
    scanf("%d%d%d",&a1,&b1,&c1);
    scanf("%d%d%d",&a2,&b2,&c2);
    scanf("%d%d%d",&a3,&b3,&c3);

    if((a1<b1+c1)&&(b1<a1+c1)&&(c1<b1+a1))
    {
        i=i+1;
    }
    if((a2<b2+c2)&&(b2<a2+c2)&&(c2<b2+a2))
    {
        i=i+1;
    }
    if((a3<b3+c3)&&(b3<a3+c3)&&(c3<b3+a3))
    {
        i=i+1;
    }

    printf("%d",i);

    return 0;
}
