//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    int x1,y1,z1,x2,y2,z2,x3,y3,z3;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    scanf("%d%d%d",&x1,&y1,&z1);
    scanf("%d%d%d",&x2,&y2,&z2);
    scanf("%d%d%d",&x3,&y3,&z3);
    int ch1,ch2,ch3,i=0;
    ch1=a*x1 + b*y1 +c*z1 + d;
    ch2=a*x2 + b*y2 +c*z2 + d;
    ch3=a*x3 + b*y3 +c*z3 + d;

    if(ch1==0)
        i++;
    if(ch2==0)
        i++;
    if(ch3==0)
        i++;

    printf("%d",i);
    return 0;
}
