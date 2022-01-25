//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prc1,prc2,prc3,prc4;
    int money;
    scanf("%d%d%d%d",&prc1,&prc2,&prc3,&prc4);
    scanf("%d",&money);
    int sum;
    sum=prc1+prc2+prc3+prc4;
    int dif,c100,c50,c20,c10,c5,c2,c1;

    if(sum>money)
        printf("Not Enough");
    else if(sum==money)
        printf("Thank You");
    else
    {
        dif=money-sum;
        c100=dif/100;
        dif=dif-(c100*100);
        c50=dif/50;
        dif=dif-(c50*50);
        c20=dif/20;
        dif=dif-(c20*20);
        c10=dif/10;
        dif=dif-(c10*10);
        c5=dif/5;
        dif=dif-(c5*5);
        c2=dif/2;
        dif=dif-(c2*2);
        c1=dif;

        printf("%d %d %d %d %d %d %d",c100,c50,c20,c10,c5,c2,c1);

    }

    return 0;
}
