//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    int i=0;
    scanf("%d%d",&m,&n);

    while(m<n)
    {

        m=(m*1.03);
        n=(n*1.02);
        i++;
        if(m>n)
        {
            printf("%d",i);
            break;
        }


    }

    return 0;
}
