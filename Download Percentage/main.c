//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int at,bt,ct;
    int ad,bd,cd;
    float a1,a2,a3,sum;

    scanf("%d%d%d%d%d%d",&at,&bt,&ct,&ad,&bd,&cd);

    a1=(float)ad/at*100.0;
    a2=(float)bd/bt*100.0;
    a3=(float)cd/ct*100.0;

    if(a1>a2 && a1>a3)
        printf("%.2f ",a1);
    else if(a2>a3)
        printf("%.2f ",a2);
    else
        printf("%.2f ",a3);

    sum=((float)(ad+bd+cd)/(at+bt+ct))*100.0;

    printf("%.2f",sum);


    return 0;
}
