//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,uprc,weight,cod,i;
    float w,c;
    double prc,tot=0;

    scanf("%d%d",&n,&uprc);

    for(i=0; i<n; i++)
    {
        scanf("%d%d",&weight,&cod);

        if(weight<=50)
            w=1;
        else if(weight<=100)
            w=1.5;
        else if(weight<=250)
            w=3;
        else if(weight<=500)
            w=6;
        else if(weight<=1000)
            w=12;
        else
            w=20;

        if(cod==1)
            c=0.5;
        else if(cod==2)
            c=1;
        else if(cod==3)
            c=1.5;
        else if(cod==4)
            c=2;
        else if(cod==5)
            c=3;
        else
            c=5;

        prc=((double)(uprc*w*c));
        tot=tot+prc;
    }



    printf("%.2lf",tot);

    return 0;
}
