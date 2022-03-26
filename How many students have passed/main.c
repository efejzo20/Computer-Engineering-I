//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int a,b,c;
    int i=1,j=0;
    float ave;
    scanf("%d",&n);

    while(i<=n)
    {
        scanf("%d%d%d",&a,&b,&c);
        ave=(a+b+c)/3.0;
        if(ave>=59.5)
            j++;
        i++;
    }
    printf("%d",j);
    return 0;
}
