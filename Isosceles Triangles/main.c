//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if((a<b+c)&&(b<a+c)&&(c<b+a))
    {
        if((a==b)||(a==c)||(b==c))
            printf("Yes");
        else
            printf("No");
    }

    return 0;
}
