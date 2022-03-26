//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nPages,nQues,nWord;
    int i,sum,prc,extra=0;

    for(i=0; i<4; i++)
    {
        scanf("%d%d%d",&nPages,&nQues,&nWord);
        if(nPages<60 || nQues<50 || nWord<25)
        {
           prc=0;
           break;
        }

        else if(nPages==60 && nQues==50 && nWord==25)
            prc=600;

        if(nPages>60)
            extra=extra+(nPages-60)*4;
        if(nQues>50)
            extra=extra+(nQues-50)*6;
        if(nWord>25)
            extra=extra+(nWord-25)*6;
        if(nPages==60)
            extra=extra+0;
        if(nQues==50)
            extra=extra+0;
        if(nWord==25)
            extra=extra+0;


        prc=600+extra;

    }

    sum=sum+prc;
    printf("%d",sum);

    return 0;
}
