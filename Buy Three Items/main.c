//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int am;
    scanf("%d%d%d/n",&a,&b,&c);
    scanf("%d",&am);
    int a1,a2,a3,i;
    a1=am-a;
    a2=a1-b;
    a3=a2-c;
    if(a1>=0)
    {
        i=1;
        if(a2>=0)
        {
            i=2;
            if(a3>=0)
            {
                i=3;
            }
        }
    }
    else
        i=0;

    printf("%d",i);

    return 0;
}
