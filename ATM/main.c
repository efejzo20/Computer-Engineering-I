//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    float y;
    float z;
    scanf("%d%f",&x,&y);

    if(x%5==0)
    {
        if(y>=(x+0.50))
        {
            z=y-x-0.50;
            printf("%.2f",z);
        }
        else
            printf("%.2f",y);
    }
    else
        printf("%.2f",y);

    return 0;
}
