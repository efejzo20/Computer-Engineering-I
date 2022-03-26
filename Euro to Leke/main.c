//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    double euro2lek;
    int type;
    double am,sum=0;
    scanf("%d%lf",&n,&euro2lek);

    for(i=0; i<n; i++)
    {
        scanf("%d%lf",&type,&am);
        if(type==1)
            sum+=am;
        else
            sum+=(am*euro2lek);
    }

    printf("%.1lf",sum);

    return 0;
}


